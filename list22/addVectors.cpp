#include <iostream>
using namespace std;

void addVectors(int vector1[], int vector2[], int size);

int main() {
    int size, fill;
    cin >> size;

    int vector1[size], vector2[size];

    for(int i = 0; i < size * 2; i++) {
        cin >> fill;
        if(i < size)
            vector1[i] = fill;
        else
            vector2[i - size] = fill;
    }

    addVectors(vector1, vector2, size);

    return 0;
}

void addVectors(int vector1[], int vector2[], int size) {
    int aux1, aux2, vector3[size * 2];

    cout << "[ ";
    for(int i = 0; i < size * 2; i++) {
        if(i < size - 1)
            cout << vector1[i] << " , ";

        else if(i == size - 1)
            cout << vector1[i] << " ]" << endl << "+" << endl << "[ ";

        else if(i < (size * 2) - 1)
            cout << vector2[i - size] << " , ";

        else 
            cout << vector2[i - size] << " ]" << endl << "=" << endl << "[ ";
    }

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(vector1[i] < vector1[j]) {
                aux1 = vector1[j];
                vector1[j] = vector1[i];
                vector1[i] = aux1;
            }

            if(vector2[i] < vector2[j]) {
                aux2 = vector2[j];
                vector2[j] = vector2[i];
                vector2[i] = aux2;
            }
        }
    }

    for(int i = 0, j = size - 1, k = 0; i < size * 2; i++) {
        if(i % 2 == 0) {
            vector3[i] = vector1[j];
            j--;
        } else {
            vector3[i] = vector2[k];
            k++;
        }
    }
    
    for(int i = 0; i < size * 2; i++) {
        if(i < (size * 2) - 1)
            cout << vector3[i] << " , ";
        else 
            cout << vector3[i] << " ]";
    }
}