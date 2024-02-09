#include <string>

using namespace std;

class Reverser {
 public:
  string reverseString(string s) {
    if (s.size() == 0) {
      return "";
    }
    return s[s.size() - 1] + reverseString(s.substr(0, s.size() - 1));
  }
  int reverseDigit(int value) {
    if (value < 0) {
      return -1;
    }
    return stoi(reverseString(to_string(value)));
  }
};
