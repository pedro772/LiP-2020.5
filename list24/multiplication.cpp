#include <iostream>
using namespace std;

int multiply(int num1, int num2);

int main() {
    int num1, num2, result;
    cin >> num1 >> num2;

    result = multiply(num1, num2);

    cout << num1 << " * " << num2 << " = " << result;

    return 0;
}

int multiply(int num1, int num2) {
    if(num2 == 0)
        return 0;
    else if(num2 == 1)
        return num1;
    else {
        return num1 + multiply(num1, num2 - 1);
    }
}