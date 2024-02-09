#include "QuickSort.h"

vector<int> QuickSort::sort(vector<int> list) {
  int n = list.size();
  if (n <= 1) {
    return list;
  }
  int m_index = n >= 3 ? 2 : n / 2;
  int m = list[m_index];
  vector<int> l;
  vector<int> r;
  for (int i = 0; i < n; i++) {
    if (i == m_index) {
      continue;
    }
    if (list[i] < m) {
      l.push_back(list[i]);
    } else {
      r.push_back(list[i]);
    }
  }
  vector<int> sortedLeft = sort(l);
  vector<int> sortedRight = sort(r);
  sortedLeft.push_back(m);
  sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());
  return sortedLeft;
}
