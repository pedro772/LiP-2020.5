#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, powA, powB, powC, aux;
    bool isTriangle = true, isEquilateral = false;

    cin >> a >> b >> c;

    float vertices[3] = {a, b, c};

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(vertices[i] < vertices[j]) {
                aux = vertices[j];
                vertices[j] = vertices[i];
                vertices[i] = aux;
            }
        }
    }

    a = vertices[0];
    powA = pow(a, 2);
    b = vertices[1];
    powB = pow(b, 2);
    c = vertices[2];
    powC = pow(c, 2);

    if(a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO";
        isTriangle = false;
    }

    if((powA == (powB + powC)) && isTriangle)
        cout << "TRIANGULO RETANGULO" << endl;
    
    if((powA > (powB + powC)) && isTriangle)
        cout << "TRIANGULO OBTUSANGULO" << endl;

    if((powA < (powB + powC)) && isTriangle)
        cout << "TRIANGULO ACUTANGULO" << endl;

    if((a == b && a == c) && isTriangle) {
        cout << "TRIANGULO EQUILATERO" << endl;
        isEquilateral = true;
    }

    if((a == b || a == c || b == c) && !isEquilateral && isTriangle)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}