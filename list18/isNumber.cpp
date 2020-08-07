#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isNumber(string input);

int main() {
    string input;
    getline(cin, input);

    if(isNumber(input))
        cout << input << " representa um número";
    else
        cout << input << " não representa um número";

    return 0;
}

bool isNumber(string input) {
    int inputLen = input.size();
    int count = 0;
 
    for(int i = 0; i < inputLen; i++) {
        if(isdigit(input[i]) || input[0] == '-')
            count++;
    }

    if(count == inputLen)
        return true;
    else 
        return false;
}