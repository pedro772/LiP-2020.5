#include <iostream>
using namespace std;

int main() {
    int n, digit, div = 100;

    cin >> n;

    for(int i = 0; i < 3; i++) {
        digit = (n / div) % 10;
        div /= 10;
        cout << digit <<  " ";
    }

    return 0;
}