#include "robot_name.h"
#include <string>

namespace robot_name {

std::string robot::name() const { return robot::robot_name; }

void robot::reset() {
  char name[5];
  name[0] = 'A' + std::rand() % 26;
  name[1] = 'A' + std::rand() % 26;
  name[2] = '0' + std::rand() % 10;
  name[3] = '0' + std::rand() % 10;
  name[4] = '0' + std::rand() % 10;
  robot::robot_name = std::string(name);
}

} // namespace robot_name
