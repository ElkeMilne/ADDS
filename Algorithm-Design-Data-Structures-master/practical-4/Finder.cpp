#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  int n1 = s1.size();
  int n2 = s2.size();
  
  vector<int> result(n2, -1);

  for (int i = 0; i < n2; i++) {
    size_t found = s1.find(s2.substr(0, i + 1), i == 0 ? 0 : result[i - 1]);
    if (found != string::npos) {
      result[i] = found;
    } else {
      break;
    }
  }
  return result;
}
