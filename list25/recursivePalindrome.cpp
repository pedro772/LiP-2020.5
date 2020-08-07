#include <iostream>
#include <string>
using namespace std;

string isPalindrome(string input, int strLen);

int main() {
    string input;
    cin >> input;

    int strLen = input.size();

    cout << input << isPalindrome(input, strLen);
    
    return 0;
}

string isPalindrome(string input, int strLen) {
    if(strLen == 0 || strLen == 1)
        return " é palíndromo";

    else if(input[0] != input[strLen - 1])
        return " não é palíndromo";

    else {
        string substring = input.substr(1, strLen - 2);
        int subStrLen = substring.size();

        return isPalindrome(substring, subStrLen);
    }
}