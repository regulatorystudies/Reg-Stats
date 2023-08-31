# Rules Published in the Federal Register by Presidential Year

# clean environment
rm(list=ls())

# load packages
library(ggplot2)
library(png)
library(tidyr)
library(dplyr)

# load data
rules_pub_NA <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/rules_pub_in_FR_by_pres_year/federal_register_rules_presidential_year_0.csv")

# modify column names
colnames(rules_pub_NA) <- c("year", "final", "proposed")

# remove rows with NA values
rules_pub <- rules_pub_NA[complete.cases(rules_pub_NA), ]

# make long data frame
rules_pub_long <- pivot_longer(rules_pub, cols = c("final", "proposed"), names_to =
"rule_type", values_to = "rule_num")

# change rule_type column to factor (assign levels and labels)
rules_pub_long <- rules_pub_long %>% 
  mutate(rule_type = factor(rule_type,
                            levels = c("final", 
                                       "proposed"),
                            labels = c("Final Rules", 
                                       "Proposed Rules")))

# set current date
current_date <- format(Sys.Date(), "%B %d, %Y")

# set caption text
caption_text <- paste("Source: Federal Register API; excludes\n corrections to rules.\n\nUpdated:", current_date)

line1 <- ggplot(rules_pub_long,
                aes(x = year,
                    y = rule_num,
                    group = rule_type,
                    color = rule_type,
                    linetype = rule_type)) +
  geom_line(aes(linetype = rule_type), linewidth = 0.75) +
  scale_color_manual(values = c("#033C5A", "#0190DB"),
                     guide = "legend") +
  scale_linetype_manual(values = c("solid", "33"),
                        guide = "legend") +
  coord_cartesian(clip = "off") +
  theme_minimal() +
  theme(
    plot.title = element_text(hjust = 0.5, margin = margin(b = 0)),
    legend.position = "top",
    legend.margin = margin(t = 10),
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "lightgray", linetype = "solid"),
    panel.grid.minor = element_blank(), 
    plot.caption = element_text(hjust = 1, margin = margin(t = 10, l = 6, unit = "pt")),
    plot.margin = margin(40, 40, 40, 40),
    axis.text.x = element_text(angle = 60, hjust = 1)
  ) +
  xlab(element_blank()) +
  ylab("Number of Rules") +
  ggtitle("Rules Published in the Federal Register by Presidential Year") +
  labs(color = NULL, linetype = NULL, caption = caption_text) +
  scale_y_continuous(
    breaks = seq(0, max(rules_pub_long$rule_num) + 1000, by = 1000),
    expand = c(0, 0), 
    limits = c(-2, max(rules_pub_long$rule_num) + 1000)
  )

line1






