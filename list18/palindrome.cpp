#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string word);

int main() {
    string word;
    cin >> word;

    if(IsPalindrome(word))
        cout << word << " é um palíndromo";
    else
        cout << word << " não é um palíndromo";

    return 0;
}

bool IsPalindrome(string word) {
    string aux = word;
    int strLen = aux.size();

    for(int i = 0; i < strLen / 2; i++)
        swap(aux[i], aux[strLen - i - 1]);

    if(aux == word)
        return true; 
    else
        return false;
}