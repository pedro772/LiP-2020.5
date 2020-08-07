#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float baseSalary, sales, totalSalary, commission;

    cin >> baseSalary >> sales;

    commission = sales * 0.05;
    totalSalary = baseSalary + commission;

    cout << "Total = R$ " << fixed << setprecision(2) << totalSalary;

    return 0;
}