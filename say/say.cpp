#include "say.h"
#include <map>
#include <string>
#include <vector>
#include <stdexcept>

namespace say {
    std::vector<unsigned long long> components( unsigned long long number ) {
        std::vector<unsigned long long>  result;
        unsigned long long mod = 10;
        while (number > 0) {
            result.insert(result.begin(), number % mod);
            number -= result.back();
            mod *= 10;
        }
        return result;
    }
std::string in_english(unsigned long long number) {
  std::map<unsigned long long, std::string> english = {
      {0ULL, "zero"},
      {1ULL, "one"},
      {2ULL, "two"},
      {3ULL, "three"},
      {4ULL, "four"},
      {5ULL, "five"},
      {6ULL, "six"},
      {7ULL, "seven"},
      {8ULL, "eight"},
      {9ULL, "nine"},
      {10ULL, "ten"},
      {11ULL, "eleven"},
      {12ULL, "twelve"},
      {13ULL, "thirteen"},
      {14ULL, "fourteen"},
      {15ULL, "fifteen"},
      {16ULL, "sixteen"},
      {17ULL, "seventeen"},
      {18ULL, "eighteen"},
      {19ULL, "nineteen"},
      {20ULL, "twenty"},
      {30ULL, "thirty"},
      {40ULL, "forty"},
      {50ULL, "fifty"},
      {60ULL, "sixty"},
      {70ULL, "seventy"},
      {80ULL, "eighty"},
      {90ULL, "ninety"},
  };
  try {
      return english.at(number);
  }
  catch ( const std::out_of_range& e ) {
  if( number > 20 ) {
      std::string result = "";
      auto number_components = components(number);
      for(auto& it : number_components) {
          result += it;
      }
      return result;
      
  }
  }
  return "";
}

} // namespace say
