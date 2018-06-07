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
            << coloringText("White", WHITE) << std::endl;
}
