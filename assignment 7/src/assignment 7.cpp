//============================================================================
// Name        : assignment.cpp
// Author      : Sergey Zakuraev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	int found = 0;
	string a;

	cin >> a;

	for (int i = 0; i < a.size(); i++) {
		if(a[i] == 'f') {
			if (found == 1) {
				cout << i;
				found ++;
				break;
			}
			found++;
		}
	}

	if(found == 1) {
		cout << -1;
	} else if (found == 0) {
		cout << -2;
	}



	return 0;
}
