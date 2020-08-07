#include <iostream>
using namespace std;

void div(int x, int y, int &quo, int &rem);


int main() {
    int x, y, quo = 0, rem = 0;

    cin >> x >> y;

    div(x, y, quo, rem);

    cout << "Q = " << quo << endl;
    cout << "R = " << rem;

    return 0;
}

void div(int x, int y, int &quo, int &rem) {
    int counter = 1, multipliedValue = 0;

    while(multipliedValue <= x) {
        multipliedValue = y * counter;
        counter++;
    }

    rem = x - (multipliedValue - y);
    quo = counter - 2;
}