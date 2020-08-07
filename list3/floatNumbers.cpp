#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float input, floatPart;
    int intPart;

    cin >> input;

    intPart = int(input);
    floatPart = (input - intPart) * 1000;

    cout << "Parte inteira: " << intPart << endl;
    cout << "Parte decimal: " << floor(floatPart) << endl;

    return 0;
}