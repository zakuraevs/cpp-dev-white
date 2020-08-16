#include <iostream>
#include<string>
#include <math.h>
using namespace std;

int main() {
	double a, b, c;

	cin >> a >> b >> c;

	if ( a == 0 ) {
		double x = -c / b;
		cout << x;
	} else if ( b * b < 4 * a * c ) {
		return 0;
	} else {
		double d = sqrt(b * b - 4 * a * c);
		double x1 = ( -b + d)/(2*a);
		double x2 = ( -b - d)/(2*a);

		if (x1 == x2) {
			cout << x1;
		} else {
			cout << x1 << " " << x2;
		}

	}

	return 0;
}
