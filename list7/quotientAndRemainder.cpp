#include <iostream>
using namespace std;

int main() {
    int n, m, quo, rem, counter = 1, multipliedValue = 0;

    cin >> n >> m;

    while(multipliedValue <= n) {
        multipliedValue = m * counter;
        counter++;
    }

    rem = n - (multipliedValue - m);
    quo = counter - 2;

    cout << "Quociente: " << quo << endl;
    cout << "Resto: " << rem;

    return 0;
}