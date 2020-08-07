#include <iostream>
using namespace std;

int sumOfDivs(int a) {
	int sum = 0, i;
	for(i = 1; i <= a / 2; i++) {
		if(a % i == 0)
			sum += i;
	}

	return sum;
}

bool isAmicable(int max, int a, int b) {
	if((b <= max) && (sumOfDivs(b) == a))
		return true;
	else
		return false;
}

int main() {
	int max;

	cin >> max;

	int min = 1;

	for(int a = min; a <= max; a++) {
		int b = sumOfDivs(a);
			
		if(isAmicable(max, a, b))
			cout << a << " amigo de " << b << endl;
	}

	return 0;
}