#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char product;
    float price, stoveDiscount = 0.95, fridgeDiscount = 0.9, finalPrice;

    cin >> product >> price;

    product = int(product);

    if(product == 102) {
        if(price >= 500)
            stoveDiscount = 0.9;

        finalPrice = price * stoveDiscount;

        cout << "Preco do fogao com desconto: " << fixed << setprecision(2) << finalPrice;
    }

    else if(product == 103) {
        if(1000 <= price <= 2000)
            fridgeDiscount = 0.8;
        if(price > 2000)
            fridgeDiscount = 0.7;

        finalPrice = price * fridgeDiscount;

        cout << "Preco da geladeira com desconto: " << fixed << setprecision(2) << finalPrice;
    }

    else
        cout << "Codigo invalido";

    return 0;
}