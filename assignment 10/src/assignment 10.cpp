
#include <iostream>
using namespace std;

int Factorial(int n) {
	if (n <= 0) {
		return 1;
	}

	int res = n;
	int i = n-1;

	while (i > 0){
		res = res * i;
		i--;
	}

	return res;
}

int main() {

	int res = Factorial(4);

	cout << res;

	return 0;
}
