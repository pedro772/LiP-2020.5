#include <iostream>
using namespace std;

int main() {
    int n, m1, n2, n5, n10, n20, n50, n100;
    cin >> n;

    n100 = n / 100;
    n = n - (n100 * 100);

    n50 = n / 50;
    n = n - (n50 * 50);

    n20 = n / 20;
    n = n - (n20 * 20);

    n10 = n / 10;
    n = n - (n10 * 10);

    n5 = n / 5;
    n = n - (n5 * 5);

    n2 = n / 2;
    n = n - (n2 * 2);

    m1 = n / 2;
    m1 = n - (m1);

    cout << n100 << " nota(s)de 100" << endl;
    cout << n50 << " nota(s)de 50" << endl;
    cout << n20 << " nota(s)de 20" << endl;
    cout << n10 << " nota(s)de 10" << endl;
    cout << n5 << " nota(s)de 5" << endl;
    cout << n2 << " nota(s)de 2" << endl;
    cout << m1 << " moeda de 1" << endl;

    return 0;
}