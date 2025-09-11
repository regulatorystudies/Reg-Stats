# Load required libraries
library(shiny)
library(ggplot2)
library(dplyr)
library(tidyr)
library(here)
library(cowplot)
library(magick)
library(ggrepel)
library(showtext)


# Source local functions and styles
source(here("charts", "code", "local_utils.R"))
source(here("charts", "code", "style.R"))

# Load data
data_file <- "cumulative_econ_significant_rules_by_presidential_month.csv"
copy_dataset(data_file, here("data"), here("charts", "data"))
cum_sig <- read.csv(here("charts", "data", data_file))

# Define administration variables
admins <- c("Reagan", "Bush_41", "Clinton", "Bush_43", "Obama", "Trump_45", "Biden", "Trump_47")
admin_labels <- c("Reagan", "Bush 41", "Clinton", "Bush 43", "Obama", "Trump 45", "Biden", "Trump 47")
admin_colors <- c(red, darkgreen, GWblue, GWbuff, lightblue, darkyellow, lightgreen, brown)

# Rename columns
colnames(cum_sig) <- c("month", "months_in_office", admins)

# Get rid of unnecessary columns
cum_sig <- cum_sig[, c("months_in_office", admins)]

# Get rid of unnecessary rows
cum_sig <- cum_sig[-c(98:101), ]

# Create long data frame
cum_sig_long_NA <- pivot_longer(cum_sig, cols = all_of(admins), names_to = "president", values_to = "econ_rules")

# Remove NA values
cum_sig_long <- cum_sig_long_NA[complete.cases(cum_sig_long_NA), ]

# Change president column to factor
cum_sig_long <- cum_sig_long %>%
  mutate(president = factor(president,
                           levels = admins,
                           labels = admin_labels))

# UI
ui <- fluidPage(
  titlePanel("Cumulative Economically Significant Final Rules by Administration"),

  sidebarLayout(
    # Left sidebar with controls
    sidebarPanel(
      width = 3,
      h4("Controls"),

      # President selection
      checkboxGroupInput(
        "selected_presidents",
        "Select Presidents to Display:",
        choices = admin_labels,
        selected = admin_labels
      ),

      # Show/hide first term line
      checkboxInput(
        "show_first_term_line",
        "Show First Term Line (48 months)",
        value = TRUE
      ),

      # Show/hide zero line
      checkboxInput(
        "show_zero_line",
        "Show Zero Line",
        value = TRUE
      ),

      # Download button
      downloadButton("download_plot", "Download Plot"),

      br(), br(),

      # Data info
      h5("Data Information"),
      p("This dashboard shows cumulative economically significant final rules published by presidential administrations over time."),
      p("Data sources: Office of the Federal Register (federalregister.gov) for Biden administration and all subsequent administrations; Office of Information and Regulatory Affairs (reginfo.gov) for all prior administrations."),
      p(paste("Updated:", format(Sys.Date(), "%B %d, %Y")))
    ),

    # Main panel with plot
    mainPanel(
      width = 9,
      plotOutput("main_plot", height = "600px")
    )
  )
)

# Server
server <- function(input, output) {

  # Reactive data filtering
  filtered_data <- reactive({
    if (is.null(input$selected_presidents)) {
      return(cum_sig_long[FALSE, ])  # Return empty data frame if no presidents selected
    }

    cum_sig_long %>%
      filter(president %in% input$selected_presidents)
  })

  # Calculate line endpoints for selected presidents
  line_ends <- reactive({
    filtered_data() %>%
      group_by(president) %>%
      summarise(months_in_office_end = max(months_in_office),
                econ_rules_end = max(econ_rules),
                .groups = 'drop')
  })

  # Create the main plot
  output$main_plot <- renderPlot({
    if (nrow(filtered_data()) == 0) {
      # Show empty plot with message
      ggplot() +
        annotate("text", x = 0.5, y = 0.5,
                label = "Please select at least one president to display",
                size = 6) +
        theme_void() +
        xlim(0, 1) + ylim(0, 1)
    } else {
      # Create the main plot
      p <- ggplot(filtered_data(), aes(x = months_in_office, y = econ_rules,
                                      color = president, group = president)) +
        geom_line(linewidth = 0.75) +
        scale_color_manual(values = admin_colors[admin_labels %in% input$selected_presidents]) +
        coord_cartesian(clip = "off") +
        theme_RSC +
        theme(axis.text.x = element_text(angle = 0, vjust = 0.5, hjust = 0.5)) +
        xlab("Months In Office") +
        ylab("Number of Rules") +
        ggtitle("Cumulative Economically Significant Final Rules Published by Administration") +
        labs(color = "President") +
        scale_y_continuous(breaks = seq(0, ydynam(filtered_data(), 50, 3), by = 50),
                          expand = c(0, 0),
                          limits = c(-2, max(filtered_data()$econ_rules) + 50)) +
        scale_x_continuous(breaks = seq(4, max(filtered_data()$months_in_office), by = 4),
                          expand = c(0, 0),
                          limits = c(0, max(filtered_data()$months_in_office)))

      # Add first term line if selected
      if (input$show_first_term_line) {
        p <- p + annotate(geom = "segment",
                         x = 48, xend = 48,
                         y = 0, yend = max(filtered_data()$econ_rules) + 10,
                         linetype = "dashed", linewidth = 0.50, color = RSCdarkgray) +
          annotate_RSC(geom = "text",
                      x = 48, y = max(filtered_data()$econ_rules) + 12,
                      label = "End of First Presidential Term",
                      size = 4, hjust = 0, vjust = 0)
      }

      # Add zero line if selected
      if (input$show_zero_line) {
        p <- p + annotate(geom = "segment",
                         x = min(0), xend = max(filtered_data()$months_in_office),
                         y = 0, yend = 0,
                         linetype = "solid", linewidth = 1, color = RSCgray)
      }

      # Add president labels at line endpoints
      if (nrow(line_ends()) > 0) {
        p <- p + geom_label_repel_RSC(data = line_ends(),
                                     aes(x = months_in_office_end, y = econ_rules_end,
                                         label = president),
                                     nudge_x = 0, nudge_y = 10,
                                     segment.size = 0.2,
                                     size = 4,
                                     point.size = 1,
                                     box.padding = 0,
                                     point.padding = 0,
                                     min.segment.length = 1,
                                     force = 3,
                                     label.size = NA,
                                     label.padding = 0,
                                     label.r = 0,
                                     fill = alpha(c("white"), 0.8))
      }

      # Add note
      p <- p + annotate_RSC(geom = "text",
                           x = 0, y = 0,
                           label = "\n\n\n\n\n\nNote: Data for month 0 include rules published between January 21 and January 31 of the administration's first year.",
                           size = 3.85, vjust = 0.5, hjust = 0)

      # Add logo
      suppressWarnings({
        p_with_logo <- ggdraw() +
          draw_plot(p) +
          draw_image(logo, x = 0.1, y = 0.076, halign = 0, valign = 0, width = 0.2)
      })

      p_with_logo
    }
  })

  # Download handler
  output$download_plot <- downloadHandler(
    filename = function() {
      paste("cumulative_econ_significant_rules_", Sys.Date(), ".png", sep = "")
    },
    content = function(file) {
      # Create the plot for download
      if (nrow(filtered_data()) == 0) {
        p <- ggplot() +
          annotate("text", x = 0.5, y = 0.5,
                  label = "Please select at least one president to display",
                  size = 6) +
          theme_void() +
          xlim(0, 1) + ylim(0, 1)
      } else {
        p <- ggplot(filtered_data(), aes(x = months_in_office, y = econ_rules,
                                        color = president, group = president)) +
          geom_line(linewidth = 0.75) +
          scale_color_manual(values = admin_colors[admin_labels %in% input$selected_presidents]) +
          coord_cartesian(clip = "off") +
          theme_RSC +
          theme(axis.text.x = element_text(angle = 0, vjust = 0.5, hjust = 0.5)) +
          xlab("Months In Office") +
          ylab("Number of Rules") +
          ggtitle("Cumulative Economically Significant Final Rules Published by Administration") +
          labs(color = "President") +
          scale_y_continuous(breaks = seq(0, ydynam(filtered_data(), 50, 3), by = 50),
                            expand = c(0, 0),
                            limits = c(-2, max(filtered_data()$econ_rules) + 50)) +
          scale_x_continuous(breaks = seq(4, max(filtered_data()$months_in_office), by = 4),
                            expand = c(0, 0),
                            limits = c(0, max(filtered_data()$months_in_office)))

        if (input$show_first_term_line) {
          p <- p + annotate(geom = "segment",
                           x = 48, xend = 48,
                           y = 0, yend = max(filtered_data()$econ_rules) + 10,
                           linetype = "dashed", linewidth = 0.50, color = RSCdarkgray) +
            annotate_RSC(geom = "text",
                        x = 48, y = max(filtered_data()$econ_rules) + 12,
                        label = "End of First Presidential Term",
                        size = 4, hjust = 0, vjust = 0)
        }

        if (input$show_zero_line) {
          p <- p + annotate(geom = "segment",
                           x = min(0), xend = max(filtered_data()$months_in_office),
                           y = 0, yend = 0,
                           linetype = "solid", linewidth = 1, color = RSCgray)
        }

        if (nrow(line_ends()) > 0) {
          p <- p + geom_label_repel_RSC(data = line_ends(),
                                       aes(x = months_in_office_end, y = econ_rules_end,
                                           label = president),
                                       nudge_x = 0, nudge_y = 10,
                                       segment.size = 0.2,
                                       size = 4,
                                       point.size = 1,
                                       box.padding = 0,
                                       point.padding = 0,
                                       min.segment.length = 1,
                                       force = 3,
                                       label.size = NA,
                                       label.padding = 0,
                                       label.r = 0,
                                       fill = alpha(c("white"), 0.8))
        }

        p <- p + annotate_RSC(geom = "text",
                             x = 0, y = 0,
                             label = "\n\n\n\n\n\nNote: Data for month 0 include rules published between January 21 and January 31 of the administration's first year.",
                             size = 3.85, vjust = 0.5, hjust = 0)

        suppressWarnings({
          p <- ggdraw() +
            draw_plot(p) +
            draw_image(logo, x = 0.1, y = 0.076, halign = 0, valign = 0, width = 0.2)
        })
      }

      ggsave(file, plot = p, width = 12, height = 9, dpi = 300, device = "png", bg = "white")
    }
  )
}

# Run the application
shinyApp(ui = ui, server = server)
