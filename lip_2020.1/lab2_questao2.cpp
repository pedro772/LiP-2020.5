#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, i, trono;
    trono = INT_MAX;
    cout << "Insira um numero inteiro\n";
    cin >> n;
    while(n != 0) {
        if(n <= trono)
            trono = n;
        cout << "Insira um numero inteiro\n";
        cin >> n;
    }
    cout << "O menor numero foi: " << trono;

    return 0;
}
