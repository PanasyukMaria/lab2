//Copyright by MaryMorgan

#include "Check.h"
#include <sstream>

std::string to_string(Check_type type)
{
  std::stringstream ss;
  switch (type) {
    case _random:
      ss << "_random";
      break;
    case _forward:
      ss << "_forward";
      break;
    case _reverse:
      ss << "_reverse";
      break;
  }
  return ss.str();
}
