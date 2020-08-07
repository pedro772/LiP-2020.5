#include <iostream>
using namespace std;

bool isPrime(int number) {
    if(number == 0 || number == 1)
        return 0;

    for(int j = 2; j <= (number / 2); ++j) {
        if((number % j) == 0)
            return false;
    }

    return true;
}

int countPrimes(int x, int y) {
    int count = 0;

    for(int i = x; i <= y; i++) {
        if(isPrime(i))
            count++;
    }

    return count;
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << countPrimes(x, y);

    return 0;
}