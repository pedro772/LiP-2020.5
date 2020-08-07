#include <iostream>
using namespace std;

int power(int num1, int num2);

int main() {
    int num1, num2, result;
    cin >> num1 >> num2;

    result = power(num1, num2);

    cout << "pow( " << num1 << " , " << num2 << " ) = " << result;

    return 0;
}

int power(int num1, int num2) {
    if(num2 == 0)
        return 1;
    else if(num2 == 1)
        return num1;
    else {
        return num1 * power(num1, num2 - 1);
    }
}