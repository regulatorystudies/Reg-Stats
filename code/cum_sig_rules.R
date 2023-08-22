# Cumulative Economically Significant Final Rules by Administration

# clean environment
rm(list = ls())

# load packages
library(ggplot2)
library(tidyr)
library(dplyr)
library(ggrepel)
library(png)

# load data
cum_sig <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/cum_sig_rules/Cumulative_ES_rules_published_months_in_office_071023.csv", skip = 1)

#read logo
get_png <- function(filename) {
  grid::rasterGrob(png::readPNG(filename),interpolate = TRUE)
}

l <- get_png("/Users/henryhirsch/Henry/Git/Reg-Stats-Coding-Project/code/RSC_logo.png")

# Create president_names list which can be updated at the top of the code and then referenced later in the code as needed?

# rename columns (will need to manually update with the names of new presidents)
colnames(cum_sig) <- c("month", "months_in_office", "Reagan", "Bush_41", "Clinton", "Bush_43", "Obama", "Trump", "Biden")

# get rid of unnecessary columns (will also need to manually update with new president names here)
cum_sig <- cum_sig[ , c("months_in_office", "Reagan", "Bush_41", "Clinton", "Bush_43", "Obama", "Trump", "Biden")]

# get rid of unnecessary rows (this would need to be altered if a president served more than two terms)
cum_sig <- cum_sig[-c(98:101), ]

# create long data frame (will also need to manually add new president's names here)
cum_sig_long_NA <- pivot_longer(cum_sig, cols = c("Reagan", "Bush_41", "Clinton", "Bush_43", "Obama", "Trump", "Biden"), names_to = "president", values_to = "econ_rules")

# remove NA values from long data frame (these NA values are the potential econ_rules values for presidents who didn't/haven't yet served the maximum number of months)
cum_sig_long <- cum_sig_long_NA[complete.cases(cum_sig_long_NA), ]

# change president column to factor (assign levels and labels)
cum_sig_long <- cum_sig_long %>% 
  mutate(president = factor(president,
                        levels = c("Reagan", 
                                   "Bush_41",
                                   "Clinton", 
                                   "Bush_43",
                                   "Obama", 
                                   "Trump",
                                   "Biden"),
                        labels = c("Reagan", 
                                   "Bush 41",
                                   "Clinton", 
                                   "Bush 43",
                                   "Obama", 
                                   "Trump",
                                   "Biden")))

# calculate the end points of the lines
line_ends <- cum_sig_long %>%
  group_by(president) %>%
  summarise(months_in_office_end = max(months_in_office), econ_rules_end = max(econ_rules))

# set current date
current_date <- format(Sys.Date(), "%B %d, %Y")

# set caption text
caption_text <- paste("Sources: Office of the Federal Register (federalregister.gov) for the Biden administration and subsequent administrations;\n       Office of Information and Regulatory Affairs (OIRA) (reginfo.gov) for all prior administrations.\n\nUpdated:", current_date)

# generate line graph
line1 <- ggplot(cum_sig_long, aes(x = months_in_office, y = econ_rules, color = president, group = president)) + 
  geom_line(linewidth = 0.75) +
  geom_label_repel(data = line_ends, 
                  aes(x = months_in_office_end, y = econ_rules_end, label = president),
                  nudge_x = 0, nudge_y = 10,
                  segment.size = 0.2,
                  size = 3,
                  point.size = 1,
                  box.padding = 0,
                  point.padding = 0,
                  min.segment.length = 0.9,
                  force = 3,
                  label.size = NA, 
                  label.padding = 0,
                  label.r = 0,
                  fill = alpha(c("white"), 0.8)) +
  scale_color_manual(values = c("#C9102F",
                                "#008364",
                                "#033C5A",
                                "#AA9868",
                                "#0190DB",
                                "#FFC72C",
                                "#78BE20")) +
  annotation_custom(l, xmin = 0, xmax = 18, ymin = -80, ymax = -30) + # for logo (need to play around with these settings)
  coord_cartesian(clip = "off") +
  theme_minimal() +
  theme(plot.title = element_text(hjust = 0.5),
        legend.position = "none",
        panel.grid.major.x = element_blank(),
        panel.grid.major.y = element_line(color = "lightgray", linetype = "solid"),
        panel.grid.minor = element_blank(), 
        plot.caption = element_text(hjust = 1, margin = margin(t = 10, l = 6, unit = "pt")),
        axis.ticks.x = element_line(color = "lightgrey")
        ) +
  xlab("Number of Months In Office") +
  ylab("Number of Economically Significant Rules Published") +
  ggtitle("Cumulative Economically Significant Final Rules by Administration") +
  labs(color = "President", caption = caption_text) +
  scale_y_continuous(breaks = seq(0, max(cum_sig_long$econ_rules) + 50, by = 50),
                     expand = c(0, 0), 
                     limits = c(-2, max(cum_sig_long$econ_rules) + 50)) +
  scale_x_continuous(breaks = seq(0, max(cum_sig_long$months_in_office), by = 4),
                     expand = c(0, 0),
                     limits = c(0, max(cum_sig_long$months_in_office)))

line1

# save line1 as pdf
ggsave("line1.pdf", plot = line1, width = 12.5, height = 9, dpi = 300)


