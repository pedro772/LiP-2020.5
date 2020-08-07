#include <iostream>
using namespace std;

void firstAndLast(int num, int &first, int &last);

int main() {
    int num, first = 0, last = 0;
    cin >> num;

    firstAndLast(num, first, last);

    cout << "primeiro=" << first << " ultimo=" << last;

    return 0;
}

void firstAndLast(int num, int &first, int &last) {
    last = num % 10;

    while(num >= 10)
        num /= 10;
    
    first = num;
}