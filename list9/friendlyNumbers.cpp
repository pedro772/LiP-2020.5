#include <iostream>
#include <cmath>
using namespace std;

int sumOfDivisors(int x) {
    int sum = 0;

    for(int i = 1; i <= sqrt(x); i++) {
        if(!(x % i)) {
            sum += i;

            if((x / i) != i)
                sum += x / i;
        }    
    }
    
    return sum;
}

bool isAmicable(int a, int b) {
    return (sumOfDivisors(a) == b && sumOfDivisors(b) == a);
}

int countPairs(int arr[], int n) {
    unordered_set<int> s;
    int count = 0;

    for(int i = 0; i < n; i++)
        s.insert(arr[i]);
    
    for(int i = 0; i < n; i++) {
        if(s.find(sumOfDivisors(arr[i])) != s.end()) {
            int sum = sumOfDivisors(arr[i]);
            
            if(isAmicable(arr[i], sum))
                count++;
        }
    }

    return count / 2;
}

int main() {
    int size;

    cin >> size;

    int arr1[size], arr2[size];

    for(int i = 0; i < size; i++) {
        arr1[i] = (i + 1);
    }

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << countPairs(arr1, n1) << endl;

    for(int i = size, j = 0; i > 0; i--, j++) {
        arr2[j] = (i - 1);
    }

    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << countPairs(arr2, n2);
    
    return 0;
}