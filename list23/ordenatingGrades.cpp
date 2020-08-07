#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double calculateMeanOfBestGrades(vector<double> grades, int size, double bestGradesIndex);

int main() {
    int bestGradesIndex, size;
    cin >> bestGradesIndex >> size;

    double fill;

    vector<double> grades;

    for(int i = 0; i < size; i++) {
        cin >> fill;
        grades.push_back(fill);
    }

    cout << "Média = " << fixed << setprecision(2) << calculateMeanOfBestGrades(grades, size, bestGradesIndex);

    return 0;
}

double calculateMeanOfBestGrades(vector<double> grades, int size, double bestGradesIndex) {
    double aux;

    cout << "[ ";
    for(int i = 0; i < size; i++) {
        if(i < size - 1)
            cout << fixed << setprecision(2) << grades[i] << " , ";
        else
            cout << fixed << setprecision(2) << grades[i] << " ]" << endl;
    }

    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(grades[i] < grades[j]) {
                aux = grades[j];
                grades[j] = grades[i];
                grades[i] = aux;
            }
        }
    }
    
    double sum = 0;

    for(int i = 0; i < bestGradesIndex; i++) {
        sum += grades[i];
    }

    return sum / bestGradesIndex;
}