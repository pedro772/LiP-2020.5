#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, mean;

    cin >> n1 >> n2 >> n3;

    mean = (n1 + n2 + n3) / 3;

    if((mean >= 5 && n1 >= 3 && n2 >= 3 && n3 >= 3) || mean >= 7)
        cout << "Aprovado";

    else if(mean >= 3)
        cout << "Final";

    else
        cout << "Reprovado";

    return 0;
}