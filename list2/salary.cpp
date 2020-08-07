#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int id, hoursWorked;
    float salaryPerHour, totalSalary;

    cin >> id >> hoursWorked >> salaryPerHour;
    totalSalary = hoursWorked * salaryPerHour;
    cout << "ID: " << id << endl;
    cout << "Salario: " << fixed << setprecision(2) << totalSalary;

    return 0;
}