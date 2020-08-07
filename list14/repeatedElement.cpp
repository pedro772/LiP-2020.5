#include <iostream>
using namespace std;

int main() {
    int size, fill, repetitions = 0;
    cin >> size;

    int v[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        v[i] = fill;
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(v[i] == v[j])
                repetitions++;
        }
    }

    if(repetitions > size)
        cout << "Existem elementos repetidos";
    else 
        cout << "Nao existem elementos repetidos";

    return 0;
}