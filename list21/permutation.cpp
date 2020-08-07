#include <iostream>
#include <cstdlib>
using namespace std;

void shuffle(int vec[], int seed, int size);

int main() {
    int seed, size, fill;
    cin >> seed >> size;

    int vec[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        vec[i] = fill;
    }

    cout << "vetor original" << endl << "[ ";

    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << vec[i] << " , ";
        if(i == size - 1)
            cout << vec[i] << " ]" << endl;
    }

    shuffle(vec, seed, size);

    return 0;
}

void shuffle(int vec[], int seed, int size) {
    int toSwitch1, toSwitch2;

    srand(seed);

    int randomNum = rand() % 5 + 1;
 
    cout << "permutações" << endl << "n = " << randomNum << endl;

    for(int k = 0; k < randomNum; k++) {
        toSwitch1 = rand() % size;
        toSwitch2 = rand() % size;

        cout << "pos " << toSwitch1 << " <-> " << toSwitch2 << endl;

        int aux = vec[toSwitch2];
        vec[toSwitch2] = vec[toSwitch1];
        vec[toSwitch1] = aux;
    }

    cout << "resultado" << endl << "[ ";
    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << vec[i] << " , ";
        if(i == size - 1)
            cout << vec[i] << " ]";
    }
}