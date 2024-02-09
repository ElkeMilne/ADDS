#include "BubbleSort.h"

vector<int> BubbleSort::sort(vector<int> list) {
  int n = list.size();

  bool swapped = false;
  do {
    swapped = false;
    for (int i = 1; i < n; i++) {
      if (list[i - 1] > list[i]) {
        int temp = list[i - 1];
        list[i - 1] = list[i];
        list[i] = temp;
        swapped = true;
      }
    }
  } while (swapped);

  return list;
}
