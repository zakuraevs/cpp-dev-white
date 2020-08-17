#include <iostream>
#include<string>
#include <math.h>
using namespace std;

int main() {
	double a, b, c;

	cin >> a >> b >> c;

	int d = b * b - 4 * a * c;

	if ( a == 0 ) {
		if ( b != 0 ){
			double x = -c / b;
			cout << x;
		}
	}  else if ( d == 0 ) {
		double x = -b / (2 * a);
		cout << x;
	} else if (d > 0) {
		double x1 = ( -b + sqrt(d))/(2*a);
		double x2 = ( -b - sqrt(d))/(2*a);

		cout << x1 << " " << x2;

	}

	return 0;
}
