#include <iostream>
#include <string>
#include "Bag.h"
#include <time.h>

using namespace std;
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
int sum_of_squares(int n) {
    return n == 1 ? 1 : n * n + sum_of_squares(n - 1);
}

int main() {
    cout << sum_of_squares(5) << endl;
    stars(5);
    stars(1);
    stars(2);

}
