# Economically Significant Final Rules Published by Presidential Year

# clean environment
rm(list =ls())

# load packages
library(ggplot2)
library(dplyr)
library(extrafont)
library(grid)
library(ggnewscale)
library(stringr)

# get custom font
# font_import(path='/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/GW Logos and Fonts/GW Fonts')

# load data set from GitHub
url_file <- "https://raw.githubusercontent.com/yqz5514/Reg-Stats-Coding-Project/main/es_rules_published_presidential_year_2023-03-28.csv"
sig <- read.csv(url(url_file))

# import data from computer (this pathname must be manually updated, right click on file, hold option, and click copy "" as pathname, paste into read.csv("") below this text)
# sig <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/econ_sig_rules/es_rules_published_presidential_year_2023-03-28.csv")

# modify column names
colnames(sig) <- c("year", "econ", "excluding.withdrawn")

# delete excluding.withdrawn column
sig$excluding.withdrawn <- NULL

# remove rows with NA values
sig <- sig[complete.cases(sig), ]

# create party column ("demyears" must be manually updated with years of Democrat Presidents)
demyears <- c(1993:2000, 2009:2016, 2021:2024)
sig$party <- ifelse(sig$year %in% demyears, "dem", "rep")

# make party factor variable
sig$party <- as.factor(sig$party)

# generate bar1
bar1 <- ggplot(sig, aes(x = year, y = econ, fill = party)) +
  geom_bar(stat = "identity", width = 0.5) +
  scale_fill_manual(values = c("blue", "red")) +
  theme_minimal() +
  ggtitle("Economically Significant Final Rules Published \nby Presidential Year") +
  ylab("Number of Rules") +
  xlab("") +
  scale_y_continuous(expand = c(0, 0)) +
  theme(
    plot.title = element_text(hjust = 0.5, margin = margin(b = 30, unit = "pt")),
    axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
    legend.position = "none",
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )

bar1

# generate bar2
y_lines <- c(0, 25, 50, 75, 100, 125, 150)

num_lines <- 4
increment <- 150 / (num_lines + 1)
additional_lines <- seq(increment, max(sig$econ), by = increment)

bar2 <- bar1 +
  scale_y_continuous(breaks = c(y_lines), expand = c(0, 0.05)) +
  theme(
    axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )

bar2

# generate bar3
current_date <- format(Sys.Date(), "%B %d, %Y")

caption_text <- paste("Sources: Office of the Federal Register (federalregister.gov) for the years starting 2021;\n       Office of Information and Regulatory Affairs (OIRA) (reginfo.gov) for all prior years.\n\nUpdated:", current_date)

bar3 <- bar2 +
  labs(caption = caption_text) +
  theme(plot.caption = element_text(hjust = 1, margin = margin(t = 0, l = 6, unit = "pt")))

bar3

# # Generate caption text
# current_date <- format(Sys.Date(), "%B %d, %Y")
# 
# caption_text <- paste("Sources: Office of the Federal Register (federalregister.gov) for the years starting 2021; Office of Information and Regulatory Affairs (OIRA) (reginfo.gov) for all prior years.>",
#                       "Updated:", current_date)
# 
# # Add line breaks to align sentences
# caption_text_wrapped <- str_wrap(caption_text, width = 50)
# 
# # Create a function to format the caption
# format_caption <- function(caption) {
#   lines <- str_split(caption, pattern = ">")[[1]]
#   formatted_lines <- paste0("\n", lines, "\n")
#   formatted_caption <- paste0("\n\n", paste(formatted_lines, collapse = ""), "\n")
#   return(formatted_caption)
# }
# 
# # Format the caption
# formatted_caption <- format_caption(caption_text_wrapped)
# 
# # Create the plot with the formatted caption
# bar3 <- bar2 +
#   labs(caption = formatted_caption) +
#   theme(plot.caption = element_text(hjust = 1, margin = margin(t = 0, unit = "pt")))
# 
# bar3



# add tick marks
 bar3 +
   annotate(
     geom = "segment",
     x = seq(0.5, length(sig$year) + 0.5, by = 1),
     xend = seq(0.5, length(sig$year) + 0.5, by = 1),
     y = 0,
     yend = -2,
     color = "grey"
  )
 
 
# # Define the caption text
# sentence1 <- "This is a caption for the graph."
# sentence2 <- "It has multiple sentences."
# sentence3 <- "Each sentence is aligned to the left."
# 
# caption_text <- paste(strwrap(sentence1, width = 30), strwrap(sentence2, width = 30), strwrap(sentence3, width = 30), sep = "\n")
# 
# # Create a grid viewport for the caption
# caption_vp <- viewport(
#   width = 0.8,  # Adjust the width of the caption block
#   height = 0.1,  # Adjust the height of the caption block
#   x = 0.5,  # Adjust the x-coordinate of the caption block
#   y = 0.1  # Adjust the y-coordinate of the caption block
# )
# 
# # Plot the graph and add the caption using grid
# grid.newpage()
# pushViewport(viewport(layout = grid.layout(nrow = 2, ncol = 1, heights = unit(c(0.9, 0.1), c("null", "lines")))))
# vplayout <- function(x, y)
#   viewport(layout.pos.row = x, layout.pos.col = y)
# print(bar2, vp = vplayout(1, 1))
# grid.text(caption_text, vp = caption_vp, hjust = 0, x = 0, gp = gpar(fontsize = 10))
