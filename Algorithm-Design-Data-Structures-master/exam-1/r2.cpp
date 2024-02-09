#include <iostream>

using namespace std;

void stars(int n) {
    cout << "*";
    if (n == 1) {
        cout << endl;
    } else {
        stars(n - 1);
    }
}
