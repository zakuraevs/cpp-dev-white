//============================================================================
// Name        : assignment.cpp
// Author      : Sergey Zakuraev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double n, a, b, x, y;

	cin >> n >> a >> b >> x >> y;

	if(n <= a) {
		cout << n << endl;
	} else if (n > a && n <= b) {
		cout << n * (100 - x) * 0.01 << endl;
	} else if (n > b) {
		cout << n * (100 - y) * 0.01 << endl;
	}


	return 0;
}
