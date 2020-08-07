#include <iostream>
#include <cmath>
using namespace std;

struct Complex {
    int complexNums[30][2];

    void insert(int nums[][2], int reps) {
        for(int i = 0; i < reps; i++) {
            complexNums[i][0] = nums[i][0];
            complexNums[i][1] = nums[i][1];
        }
    }

    void print(int i) {
        if(complexNums[i][1] < 0) {
            int toSwitch = -1 * (complexNums[i][1]);
            cout << complexNums[i][0] << " - " << toSwitch << "i" << endl;
        } else {
            cout << complexNums[i][0] << " + " << complexNums[i][1] << "i" << endl;
        }
    }

    void conjugate() {
        int toSwitch = -1 * (complexNums[0][1]);

        if(complexNums[0][1] < 0)
            cout << "conjugado = " << complexNums[0][0] << " + " << toSwitch << "i" << endl;
        else 
            cout << "conjugado = " << complexNums[0][0] << " - " << complexNums[0][1] << "i" << endl;
    }

    void module() {
        double module = sqrt(pow(complexNums[0][0], 2) + pow(complexNums[0][1], 2));
        cout << "módulo = " << module << endl;
    } 

    bool isEqual() {
        int first = complexNums[0][0] + complexNums[0][1];
        int second = complexNums[1][0] + complexNums[1][1];

        if(first == second)
            return true;
        else 
            return false;
    }

    void printEquality(int i) {
        if(complexNums[i][1] < 0) {
            int toSwitch = -1 * (complexNums[i][1]);
            cout << complexNums[i][0] << " - " << toSwitch << "i";
        } else {
            cout << complexNums[i][0] << " + " << complexNums[i][1] << "i";
        }
    }

    void sumComplex(int reps) {
        int sumI = 0, sumJ = 0;
        for(int i = 0; i < reps; i++) {
            sumI += complexNums[i][0];
            sumJ += complexNums[i][1];
        }

        if(sumJ < 0) {
            sumJ = -1 * sumJ;
            cout << "a soma dos complexos é " << sumI << " - " << sumJ << "i";
        } else {
            cout << "a soma dos complexos é " << sumI << " + " << sumJ << "i";
        }
    }
};

int main() {
    int size, fill;
    cin >> size;

    int numbers[size][2];
    Complex complex[size];

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> fill;
            numbers[i][j] = fill;
        }
    }

    for(int i = 0; i < size; i++) {
        complex[i].insert(numbers, size);
    }

    for(int i = 0; i < size; i++) {
        complex[i].print(i);
    }

    complex[0].conjugate();
    complex[0].module();

    if(complex[0].isEqual()) {
        for(int i = 0; i < 2; i++) {
            complex[i].printEquality(i);
            if(i == 0)
                cout << " é igual a "; 
            else 
                cout << endl;
        }
    } else {
        for(int i = 0; i < 2; i++) {
            complex[i].printEquality(i);
            if(i == 0)
                cout << " não é igual a ";
            else 
                cout << endl;
        }
    }

    complex[0].sumComplex(size);

    return 0;
}