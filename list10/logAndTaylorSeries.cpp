#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double ln(double input);

int main() {
    double input, sum = 0;
    int i;

    cin >> input;

    for(i = 1; input > 0.001 && input < 2; i++) {
        if(i != 1)
            cin >> input;

        if(input <= 0.001 || input >= 2)
            cout << fixed << setprecision(4) << "Diferença: " << sum;

        double lnCalculated = ln(input);
        double logByCMath = log(input);
        
        if(input > 0.001 && input < 2)
            cout << fixed << setprecision(4) << "Meu ln: " << lnCalculated << " C++: " << logByCMath << endl;
        
        if(logByCMath < 0)
            logByCMath *= -1;
        if(lnCalculated < 0)
            lnCalculated *= -1;
        sum += (logByCMath - lnCalculated);
    }
    
    return 0;
}

double ln(double input) {
    double taylorSeries, sum = 0;
    int i;

    for(i = 1; i <= 1000; i++) {
        if(i % 2 != 0) {
            taylorSeries = pow((input - 1), i) / i;
            sum += taylorSeries;
        }
        else {
            taylorSeries = pow((input - 1), i) / i;
            sum -= taylorSeries;
        }
    }

    return sum;
}