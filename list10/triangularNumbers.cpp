#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100000;

bool prime[MAX + 1];

void sieve();
int divCount();
int triangularNumber(int limit);

int main() {
    int limit, triNum;

    cin >> limit;

    sieve();
    triNum = triangularNumber(limit);

    cout << "O primeiro número triangular com mais de " << limit << " divisores é: " << triNum;

    return 0;
}

void sieve() {
    memset(prime, true, sizeof(prime));

    for(int p = 2; p * p < MAX; p++) {
        if(prime[p] == true) {
            for(int i = p * 2; i < MAX; i += p)
                prime[i] = false;
        }
    }
}

int divCount(int num) {
    int total = 1;
    for(int p = 2; p <= num; p++) {
        if(prime[p]) {
            int count = 0;
            if(num % p == 0) {
                while(num % p == 0) {
                    num /= p;
                    count++;
                }
                total *= (count + 1);
            }
        }
    }
    
    return total;
}

int triangularNumber(int limit) {
    if(limit == 1)
        return 3;

    int i = 2;
    int count = 0;
    int second = 1;
    int first = 1;

    while(count <= limit) {
        if(i % 2 == 0) {
            first = divCount(i + 1);
            count = first * second;
        } else {
            second = divCount((i + 1) / 2);
            count = first * second;
        }

        i++;
    }

    return i * (i - 1) / 2;
}