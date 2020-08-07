#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool verify(int a, int b);

int main() {
    int a, b;

    cin >> a >> b;

    if(verify(a, b))
        cout << "A termina com B";
    else
        cout << "A não termina com B";

    return 0;
}

bool verify(int a, int b) {
    stringstream s1, s2;
    s1 << a;
    string strA = s1.str();
    s2 << b;
    string strB = s2.str();


    int lenStrA = strA.size();
    int lenStrB = strB.size();

    if(lenStrA > lenStrB) {
        strA = strA.substr((lenStrA - lenStrB), lenStrB);
    }

    if(strA == strB)
        return true;
    else
        return false;
}