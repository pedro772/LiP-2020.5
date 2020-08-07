#include <iostream>
using namespace std;

int fatorial(int x);
int sumFatorials(int y);

int main() {   
    int input;

    cin >> input;

    cout << sumFatorials(input);

    return 0;
}

int fatorial(int x) {
    int i;
    for(i = (x - 1); i > 0; i--) {
        x *= i;
    }

    return x;
}

int sumFatorials(int y) {
    int sum = 0;

    for(int j = y; j > 0; j--) {
        sum += fatorial(j);
    }

    return sum;
}