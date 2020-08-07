#include <iostream>
using namespace std;

int checksEvenOrOdd(int num);

int main() {
    int num;
    cin >> num;

    if(checksEvenOrOdd(num))
        cout << num << " é par";
    else 
        cout << num << " é ímpar";

    return 0;
}

int checksEvenOrOdd(int num) {
    if(num == 0)
        return 1;
    else if(num == 1)
        return 0;
    else 
        return checksEvenOrOdd(num - 2);
}