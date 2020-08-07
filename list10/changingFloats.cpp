#include <iostream>
#include <cstdlib>
using namespace std;

void changes(float num);

int main() {
    float num;

    cin >> num;

    changes(num);

    return 0;
}

void changes(float num) {
    int out, div, arr[32], aux, i = 0, count = 0;

    div = num;

    while(div != 0) {
        aux = div % 2;
        div /= 2;
        arr[i] = aux;
        count++, i++;
    }

    for(int j = count - 1; j >= 0; j--)
        cout << arr[j];
}