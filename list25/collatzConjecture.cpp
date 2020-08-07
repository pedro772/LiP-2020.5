#include <iostream>
using namespace std;

int collatz(int num, int count);

int main() {
    int num;
    cin >> num;

    cout << "Números de passos: " << collatz(num, 0);

    return 0;
}

int collatz(int num, int count) {
    cout << num << endl;

    if(num == 1)
        return count;

    else if(num % 2 == 0)
        return collatz(num / 2, ++count);

    else
        return collatz(num * 3 + 1, ++count);
}