#pragma once
#include <cstdlib>
#include <sstream>

enum Color {
  BLACK,
  RED,
  GREEN,
  YELLOW,
  BLUE,
  MAGENTA,
  CYAN,
  LIGHT_GRAY,
  DUMMY,
  DEFAULT,
  DARK_GRAY,
  LIGHT_RED,
  LIGHT_GREEN,
  LIGHT_YELLOW,
  LIGHT_BLUE,
  LIGHT_MAGENTA,
  LIGHT_CYAN,
  WHITE
};

namespace {
  char textcolor[] = {0x1b, '[', '1', ';'};
  std::string getColorCode(Color c) {
    std::stringstream ss;
    ss << textcolor << (c < 10 ? 30 + c : 80 + c) << "m";
    return ss.str();
  }
}  // namespace


std::string coloringText(std::string str, Color c) {
  std::stringstream ss;
  ss << getColorCode(c) << str << getColorCode(DEFAULT);
  return ss.str();
}
