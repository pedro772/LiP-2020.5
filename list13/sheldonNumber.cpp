#include <iostream>
#include <string>
using namespace std;

bool isPrime(int num);
int positionInPrimes(int prime);
int reversesNumber(int num);
int digProduct(int num);
string binary(int num);
bool binaryIsPalindrome(int bin);

int main() {
    int sheldon, posInPrimes1 = 0, posInPrimes2 = 0, revNum, revPos, digProd;
    bool n1Prime = false, n2Prime = false, positions = false, prodAndPos = false, binaries = false;
    string bin;
    cin >> sheldon;

    if(isPrime(sheldon)) {
        cout << "É primo" << endl;
        posInPrimes1 = positionInPrimes(sheldon);
        cout << "Posição: " << posInPrimes1 << endl;
        n1Prime = true;
    } else {
        cout << "Não é primo" << endl;
        cout << "Posição: " << posInPrimes1 << endl;
    }

    revNum = reversesNumber(sheldon);
    cout << "Número invertido: " << revNum << endl;

    if(isPrime(revNum)) {
        cout << "Número invertido é primo" << endl;
        posInPrimes2 = positionInPrimes(revNum);
        cout << "Posição número invertido: " << posInPrimes2 << endl;
        n2Prime = true;
    } else {
        cout << "Não é primo" << endl;
        cout << "Posição: " << posInPrimes2 << endl;
    }

    revPos = reversesNumber(posInPrimes1);
    if(revPos == posInPrimes2) {
        positions = true;
        cout << "Posições coincidem" << endl;
    } else {
        cout << "As posições não coincidem" << endl;
    } 

    digProd = digProduct(sheldon);
    cout << "Produto dos dígitos: " << digProd << endl;

    if(digProd == posInPrimes1) {
        prodAndPos = true;
        cout << "Produto e posição coincidem" << endl;
    } else {
        cout << "Produto e posição não coincidem" << endl;
    }

    bin = binary(sheldon);
    cout << "Número em binário: " << bin << endl;

    if(binaryIsPalindrome(sheldon)) {
        binaries = true;
        cout << "Binário é palíndromo" << endl;
    } else {
        cout << "Binário não é palíndromo" << endl;
    }

    if(n1Prime && n2Prime && positions && prodAndPos && binaries)
        cout << "É Sheldon";
    else
        cout << "Não é Sheldon";

    return 0;
}

bool isPrime(int num) {
    if(num == 0 || num == 1)
        return false;

    for(int j = 2; j <= (num / 2); ++j) {
        if((num % j) == 0)
            return false;
    }

    return true;
}

int positionInPrimes(int prime) {
    int count = 0;

    for(int i = 0; i <= prime; i++) {
        if(isPrime(i))
            count++;
    }

    return count;
}

int reversesNumber(int num) {
    int reversed = 0, rem;

    while(num != 0) {
        rem = num % 10;
        reversed = reversed*10 + rem;
        num /= 10;
    }

    return reversed;
}

int digProduct(int num) {
    int rem, pro = 1, i;

    for(i = num; i > 0; i = i / 10) {
        rem = i % 10;
        pro *= rem;
    }

    return pro;
}

string binary(int num) {
    if(num == 0)
        return "0";
    else if(num == 1)
        return "1";
    else 
        return binary(num / 2) + binary(num % 2);
}

bool binaryIsPalindrome(int num) {
    string aux1 = binary(num);
    string aux2 = aux1;
    int strLen = aux1.size();

    for(int i = 0; i < strLen / 2; i++)
        swap(aux2[i], aux2[strLen - i - 1]);

    if(aux2 == aux1)
        return true;
    else 
        return false;
}