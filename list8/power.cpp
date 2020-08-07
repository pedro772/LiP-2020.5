#include <iostream>
using namespace std;

int power(int x, int y) {
    int output = x;

    for(int i = 1; i < y; i++) {
        output *= x;
    }

    if(!y)
        output = 1;

    return output;
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << power(x, y);

    return 0;
}