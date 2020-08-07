#include <iostream>
using namespace std;

int main() {
    int size, fill;
    cin >> size;

    int v[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        v[i] = fill;
    }

    for(int i = (size - 1); i >= 0; i--) {
        cout << v[i] << endl;
    }

    return 0;
}