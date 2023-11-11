#library(grid)
#library(png)

# loads png file
get_png <- function(filename) {
  grid::rasterGrob(png::readPNG(filename), interpolate = TRUE) # adjust logo size dimensions here
}
