#include <iostream>
using namespace std;

int position(int n, int pos) {
    int aux;

    for(int i = 0; i < pos; i++) {
        aux = n % 10;
        n /= 10;
    }

    return aux;
}

int main() {
    int n, pos;

    cin >> n >> pos;

    cout << position(n, pos);

    return 0;
}