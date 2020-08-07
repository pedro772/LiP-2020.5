#include <iostream>
using namespace std;

bool verifyProductValue(int sales[], int size, int verifier);
bool verifyTwoProducts(int sales[], int size);
void whoSoldMore(int salesman1[], int numberOfSales1, int salesman2[], int numberOfSales2);
bool allMoreExpensive(int salesman1[], int numberOfSales, int salesman2[]);

int main() {
    int sizeForComparison, size1 = 0, size2 = 0, fill;
    cin >> size1;
    cout << "Vendas 1." << endl;

    int salesBySalesman1[size1], salesBySalesman2[size2];

    for(int i = 0; i < size1; i++) {
        cin >> fill;
        salesBySalesman1[i] = fill;
    }

    cout << "[ ";

    for(int i = 0; i < size1; i++) {
        if(i < (size1 - 1))
            cout << salesBySalesman1[i] << " , ";
        else
            cout << salesBySalesman1[i] << " ]" << endl;
    }

    cin >> size2;
    cout << "Vendas 2." << endl;

    for(int i = 0; i < size2; i++) {
        cin >> fill;
        salesBySalesman2[i] = fill;
    }

    cout << "[ ";

    for(int i = 0; i < size2; i++) {
        if(i < (size2 - 1))
            cout << salesBySalesman2[i] << " , ";
        else
            cout << salesBySalesman2[i] << " ]" << endl;
    }

    int verifier1, verifier2;
    cin >> verifier1 >> verifier2;

    if(verifyProductValue(salesBySalesman1, size1, verifier1))
        cout << "Sim, funcionário 1 vendeu um produto cujo valor foi " << verifier1 << endl;
    else
        cout << "Não, funcionário 1 não vendeu um produto cujo valor foi " << verifier1 << endl;

    if(verifyProductValue(salesBySalesman2, size2, verifier2))
        cout << "Sim, funcionário 2 vendeu um produto cujo valor foi " << verifier2 << endl;
    else
        cout << "Não, funcionário 2 não vendeu um produto cujo valor foi " << verifier2 << endl;



    if(verifyTwoProducts(salesBySalesman1, size1))
        cout << "Sim, funcionário 1 vendeu dois produtos com o mesmo valor" << endl;
    else
        cout << "Não, funcionário 1 não vendeu dois produtos com o mesmo valor" << endl;

    if(verifyTwoProducts(salesBySalesman2, size2))
        cout << "Sim, funcionário 2 vendeu dois produtos com o mesmo valor" << endl;
    else
        cout << "Não, funcionário 2 não vendeu dois produtos com o mesmo valor" << endl;

    whoSoldMore(salesBySalesman1, size1, salesBySalesman2, size2);

    if(size1 <= size2)
        sizeForComparison = size1;
    else 
        sizeForComparison = size2;

    if(allMoreExpensive(salesBySalesman1, sizeForComparison, salesBySalesman2))
        cout << "Sim, todos os produtos vendidos por 1 foram mais caros que os produtos vendidos por 2" << endl;
    else
        cout << "Não, todos os produtos vendidos por 1 não foram todos mais caros que os produtos vendidos por 2" << endl;

    if(allMoreExpensive(salesBySalesman2, sizeForComparison, salesBySalesman1))
        cout << "Sim, todos os produtos vendidos por 2 foram mais caros que os produtos vendidos por 1" << endl;
    else
        cout << "Não, todos os produtos vendidos por 2 não foram todos mais caros que os produtos vendidos por 1" << endl;

}

bool verifyProductValue(int sales[], int size, int verifier) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(sales[i] == verifier)
            count++;
    }

    if(count > 0)
        return true;
    else
        return false;
}

bool verifyTwoProducts(int sales[], int size) {
    int repetitions = 0;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(sales[i] == sales[j])
                repetitions++;
        }
    }

    if(repetitions > size)
        return true;
    else 
        return false;
}

void whoSoldMore(int salesman1[], int numberOfSales1, int salesman2[], int numberOfSales2) {
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < numberOfSales1; i++)
        sum1 += salesman1[i];
    
    for(int i = 0; i < numberOfSales2; i++)
        sum2 += salesman2[2];

    if(sum1 > sum2)
        cout << "O melhor vendedor foi 1" << endl;
    else if(sum1 == sum2)
        cout << "Empate" << endl;
    else
        cout << "O melhor vendedor foi 2" << endl;
}

bool allMoreExpensive(int salesman1[], int numberOfSales, int salesman2[]) {
    int count = 0;
    for(int i = 0; i < numberOfSales; i++) {
        if(salesman1[i] > salesman2[i])
            count++;
    }

    if(count == numberOfSales)
        return true;
    else 
        return false;
}