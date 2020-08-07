#include <iostream>
using namespace std;

int sequence(int factor, int i, int value[]);

int main() {
    int factors;
    cin >> factors;

    int value[factors];

    cout << sequence(factors, 2, value);

    return 0;
}

int sequence(int factor, int i, int value[]) {
    value[0] = 2;
    value[1] = 3;

    if(i + 1 == factor || factor == 1 || factor == 2) {
        if(factor == 1) {
            cout << "a1 = ";
            return 2;
        }

        else if(factor == 2) {
            cout << "a2 = ";
            return 3;
        }

        else {
            value[i] = 2 * value[i - 2] + value[i - 1];

            cout << "a" << (i + 1) << " = ";
            return value[i];
        }
    }
    else {
        value[i] = 2 * value[i - 2] + value[i - 1];
        return sequence(factor, ++i, value);
    }
}