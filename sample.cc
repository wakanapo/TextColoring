#include <iostream>
#include "text_coloring.h"

int main() {
  std::cout << "The color variation is "
            << coloring::coloringText("Red, ", coloring::Color::RED)
            << coloring::coloringText("Green, ", coloring::Color::GREEN)
            << coloring::coloringText("blue, ", coloring::Color::BLUE)
            << coloring::coloringText("Yellow, ", coloring::Color::YELLOW)
            << coloring::coloringText("Magenta, ", coloring::Color::MAGENTA)
            << coloring::coloringText("Cyan, ", coloring::Color::CYAN)
            << coloring::coloringText("Black, ", coloring::Color::BLACK)
            << coloring::coloringText("White", coloring::Color::WHITE) << std::endl;
}
