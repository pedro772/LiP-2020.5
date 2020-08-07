#include <iostream>
using namespace std;

void ordenateVector(int numbers[], int size);

int main() {
    int size, fill;
    cin >> size;

    int numbers[size];

    for(int i = 0; i < size; i++) {
        cin >> fill;
        numbers[i] = fill;
    }

    ordenateVector(numbers, size);

    return 0;
}

void ordenateVector(int numbers[], int size) {
    int aux;

    cout << "[ ";
    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << numbers[i] << " , ";
        else
            cout << numbers[i] << " ]" << endl;
    }

    for(int i = 0, k = 1; i < size; i += 2, k += 2) {
        for(int j = i + 2; j < size; j += 2) {
            if(numbers[i] > numbers[j]) {
                aux = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = aux;
            }
        }

        for(int j = k + 2; j < size; j += 2) {
            if(numbers[k] < numbers[j]) {
                aux = numbers[j];
                numbers[j] = numbers[k];
                numbers[k] = aux;
            }
        }
    }

    cout << "[ ";
    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << numbers[i] << " , ";
        else
            cout << numbers[i] << " ]";
    }
}