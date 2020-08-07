#include <iostream>
using namespace std;

int intervalSum(int x, int y) {
    int sum = x;

    for(int i = y; i > x; i--) {
        sum += i;
    }

    return sum;
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << intervalSum(x, y);

    return 0;
}