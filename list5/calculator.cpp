#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    char operador;

    cin >> a >> b >> operador;

    switch (operador) {
        case '+': 
            cout << fixed << setprecision(2) << a << " + " << b << " = " << a + b;
            break;

        case '-':
            cout << fixed << setprecision(2) << a << " - " << b << " = " << a - b;
            break;

        case '*':
            cout << fixed << setprecision(2) << a << " * " << b << " = " << a * b;
            break;

        case '/':
            if(b != 0) {
                cout << fixed << setprecision(2) << a << " / " << b << " = " << a / b;
                break;
            }
            else {
                cout << "erro!";
                break;
            }

        default:
            cout << "erro!";
            break;
    }


    return 0;
}