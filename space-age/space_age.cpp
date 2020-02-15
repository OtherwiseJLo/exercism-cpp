#include "space_age.h"

namespace space_age {
space_age::space_age(int input_seconds) {
  space_age::age_in_seconds = input_seconds;
  space_age::age_in_years = age_in_seconds / seconds_in_year;
}

int space_age::seconds() const { return age_in_seconds; }
double space_age::on_earth() const {
  return age_in_years * year_convert.at("earth");
}

}  // namespace space_age
