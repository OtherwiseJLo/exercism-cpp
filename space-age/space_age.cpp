#include "space_age.h"

namespace space_age {
space_age::space_age(int seconds_undef) { seconds_undefined = seconds_undef; }

int space_age::seconds() const { return seconds_undefined; }

}  // namespace space_age
