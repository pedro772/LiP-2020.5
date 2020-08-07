#include <iostream>
using namespace std;

int main() {
    bool a, b, c;
    cin >> a >> b;
    cout << (!(((!a) || b) && a) || b);

    return 0;
}