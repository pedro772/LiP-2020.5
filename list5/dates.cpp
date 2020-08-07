#include <iostream>
using namespace std;

int main() {
    int days[2], months[2], years[2];

    for(int i = 0; i < 2; i++)
        cin >> days[i] >> months[i] >> years[i];
    
    if(years[0] < years[1])
        cout << "A primeira data e mais antiga";

    else if(years[0] == years[1]) {
        if(months[0] < months[1])
            cout << "A primeira data e mais antiga";
        
        else if(months[0] == months[1]) {
            if(days[0] < days[1])
                cout << "A primeira data e mais antiga";

            else if(days[0] == days[1])
                cout << "As datas sao iguais";
            
            else
                cout << "A segunda data e mais antiga";
        }

        else
            cout << "A segunda data e mais antiga";
    }

    else
        cout << "A segunda data e mais antiga";

    return 0;
}