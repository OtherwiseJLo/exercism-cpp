#include "two_fer.h"
#include <string>
#include <format>

namespace two_fer
{
  std::string two_fer( std::string name ) {
    return "One for " + name + ", one for me.";
  }

} // namespace two_fer

