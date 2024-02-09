#include <unordered_map>
using namespace std;

class Truckloads {
 private:
  unordered_map<int, int> memo;

 public:
  int numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
      return 1;
    }
    if (memo.find(numCrates) == memo.end()) {
      memo[numCrates] = numTrucks(numCrates / 2, loadSize) +
                        numTrucks((numCrates + 1) / 2, loadSize);
    }
    return memo[numCrates];
  }
};
