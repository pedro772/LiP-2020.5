#include <iostream>
using namespace std;

void multTable() {
    for(int j = 1; j <= 10; j++) {
        for(int k = 1; k <= 10; k++) {
            cout << j << " x " << k << " = " << (j * k) << endl;
        }
    }
}

int main() {
    multTable();

    return 0;
}