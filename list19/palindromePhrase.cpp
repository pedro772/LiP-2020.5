#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool IsPalindrome(string phrase);

int main() {
    string phrase;
    getline(cin, phrase);

    if(IsPalindrome(phrase))
        cout << '"' << phrase << '"' << " é um palíndromo";
    else
        cout << '"' << phrase << '"' << " não é um palíndromo";

    return 0;
}

bool IsPalindrome(string phrase) {
    string aux = phrase;
    int strLen = aux.size(), count = 0;
    int max = strLen;


    for(int i = 0; i < strLen; i++)
        aux[i] = tolower(aux[i]);

    while(count <= max) {
        if(!(aux[count] >= 'a' && aux[count] <= 'z'))
            count++;
        else if(!(aux[max] >= 'a' && aux[max] <= 'z'))
            max--;
        else if(aux[count] == aux[max])
            count++, max--;
        else
            return false;
    }

    return true;
}