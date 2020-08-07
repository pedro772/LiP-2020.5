#include <iostream>
using namespace std;

int main() {
    int i = 1, j = 1, sum = 0, n;

    cin >> n;

    while(i <= n) {
        while(j <= n) {
            if(j < i) {
                if(i % j == 0)
                    sum += j;
            }
            j++;
        }
        if(sum == i)
            cout << i << endl;

        i++;
        j = 1;
        sum = 0;
    }

    return 0;
}