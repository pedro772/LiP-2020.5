#include <iostream>
#include <iomanip>
using namespace std;

void tens(int num, int &ten1, int &ten2);

int main() {
    int min, max, ten1, ten2, i;
    cin >> min >> max;

    for(i = min; i <= max; i++) {
        tens(i, ten1, ten2);
    }

    return 0;
}

bool checksReverse(int t1, int t2) {
    int reversed = 0, rem;

    while(t1 != 0) {
        rem = t1 % 10;
        reversed = reversed*10 + rem;
        t1 /= 10;
    }

    if(reversed == t2)
        return true;
    else
        return false;
}

void tens(int num, int &ten1, int &ten2) {
    ten1 = num / 100;
    ten2 = num % 100;

    if(checksReverse(ten1, ten2))
        cout << num << endl;
}