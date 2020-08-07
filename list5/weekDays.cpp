#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int day;
    string weekday[7] = {"Sabado", "Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta"};

    cin >> day;

    // Congruência de Zeller adaptada para março de 2020

    int i = (day + floor((13*4)/5) + 20 + floor(20/4) + floor(20/4) + (5*20));
    i = i % 7;

    cout << weekday[i];    

    return 0;
}