#include <iostream>
using namespace std;

int main() {
    int input, aux;

    for(int i = 0; input != 0; i++) {
        cin >> input;

        if(i == 0)
            aux = input;
        else if(input < aux && input != 0) {
            aux = input;
        }
    }

    cout << aux;

    return 0;
}