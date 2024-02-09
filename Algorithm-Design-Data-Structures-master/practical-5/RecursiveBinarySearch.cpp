#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(vector<int> list, int target) {
  int n = list.size();
  if (n == 0) {
    return false;
  }
  int m = n/2;
  if (list[m] == target) {
    return true;
  }
  if (list[m] > target) {
    vector<int> left(list.begin(), list.begin() + m);
    return search(left, target);
  } else {
    vector<int> right(list.begin() + m + 1, list.end());
    return search(right, target);
  }
}
