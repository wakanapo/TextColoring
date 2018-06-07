#include <iostream>
#include "text_coloring.h"

int main() {
  std::cout << "The color variation is "
            << coloringText("Red, ", RED)
            << coloringText("Green, ", GREEN)
            << coloringText("blue, ", BLUE)
            << coloringText("Yellow, ", YELLOW)
            << coloringText("Magenta, ", MAGENTA)
            << coloringText("Cyan, ", CYAN)
            << coloringText("Black, ", BLACK)
            << coloringText("Light gray, ", LIGHT_GRAY)
            << coloringText("Dark gray, ", DARK_GRAY)
            << coloringText("Light red, ", LIGHT_RED)
            << coloringText("Light green, ", LIGHT_GREEN)
            << coloringText("Light yellow, ", LIGHT_YELLOW)
            << coloringText("Light blue, ", LIGHT_BLUE)
            << coloringText("Light magenta, ", LIGHT_MAGENTA)
            << coloringText("Light cyan, ", LIGHT_CYAN)
            << coloringText("White", WHITE) << std::endl;
}
