#include <iostream>
#include <cstdlib>
using namespace std;

void toPermute(int seed, int dimensions, int numOfSwitches);

int main() {
    int seed, dimensions, numOfSwitches;
    cin >> seed >> dimensions >> numOfSwitches;

    toPermute(seed, dimensions, numOfSwitches);

    return 0;
}

void toPermute(int seed, int dimensions, int numOfSwitches) {
    int matrix[dimensions][dimensions];
    int aux[dimensions];

    for(int i = 0; i < dimensions; i++) {
        for(int j = 0; j < dimensions; j++) {
            if(i == j)
                matrix[i][j] = 1;
            else 
                matrix[i][j] = 0;
        }
    }

    srand(seed);

    for(int k = 0; k < numOfSwitches; k++) {
        int toSwitch1 = rand() % dimensions;
        int toSwitch2 = rand() % dimensions;
        int coinToss = rand() % 2;

        if(!coinToss)
            cout << "linha: " << toSwitch1 << " <-> " << toSwitch2 << endl;
        else
            cout << "col: " << toSwitch1 << " <-> " << toSwitch2 << endl;

        for(int i = 0; i < dimensions; i++) {
            if(!coinToss) {
                aux[i] = matrix[toSwitch2][i];
                matrix[toSwitch2][i] = matrix[toSwitch1][i];
                matrix[toSwitch1][i] = aux[i];
            } else {
                aux[i] = matrix[i][toSwitch2];
                matrix[i][toSwitch2] = matrix[i][toSwitch1];
                matrix[i][toSwitch1] = aux[i];
            }

        }
    }

    for(int i = 0; i < dimensions; i++) {
        for(int j = 0; j < dimensions; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}