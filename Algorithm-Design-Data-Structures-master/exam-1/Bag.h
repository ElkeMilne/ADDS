#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;

template <typename T>
class Bag {
private:
    vector<T> bag;
public:
    void addItem(T item) {
        bag.push_back(item);
    }
    T removeItem() {
        if (bag.size() == 0) {
            cout << endl << "Error: Bag empty" << endl << endl;
        }
        int index = rand() % bag.size();
        T item = bag[index];
        bag.erase(bag.begin() + index);
        return item;
    }
};
