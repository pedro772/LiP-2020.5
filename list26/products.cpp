#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name, type;
    string typeCode[3] = {"Eletrodoméstico", "Moda", "Outro"};
    int code;
    float price;

    void insert(string aName, int aCode, float aPrice, int aType) {
        name = aName;
        type = typeCode[aType];
        code = aCode;
        price = aPrice;
    }

    void print() {
        cout << "{ código: " << code << " , nome: " << name;
        cout << " , preço: " << price << " , tipo = " << type << " }" << endl;
    }

    int mostExpensive(float values[], int reps) {
        int aux = 0, index = 0;

        for(int i = 0; i < reps; i++) {
            if(values[i] > aux) {
                aux = values[i];
                index = i;
            }
        }

        return index;
    }

    bool hasIPad() {
        if(name == "iPad")
            return true;
        else
            return false;
    }

    float profit(float sum) {
        if(type == "Eletrodoméstico") {
            sum += price;
        }

        return sum;
    }
};

int main() {
    int reps, code, typeCode;
    float price, sum = 0;
    string name;
    bool iPad = false;

    cin >> reps;

    Product product[reps];
    float values[reps];
    
    for(int i = 0; i < reps; i++) {
        cin.ignore();

        getline(cin, name);
        cin >> code >> price >> typeCode;

        product[i].insert(name, code, price, typeCode);
        values[i] = product[i].price;
    }

    for(int i = 0; i < reps; i++) {
        product[i].print();

        if(product[i].hasIPad()) {
            iPad = true;
        }

        sum = product[i].profit(sum);
    }

    cout << "Mais caro" << endl;
    int index = product[0].mostExpensive(values, reps);
    product[index].print();

    if(iPad)
        cout << "Tem iPad" << endl;
    else 
        cout << "Não tem iPad" << endl;

    cout << "Lucro: " << sum;

    return 0;
}