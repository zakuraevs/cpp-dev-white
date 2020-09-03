#include <iostream>
using namespace std;

bool IsPalindrom (string w) {

	if (w.size() == 0) {
		return true;
	}

	int first = 0;
	int last = w.size() - 1;

	while(first < last) {
		if(w[first] != w[last]) {
			return false;
		}
		first++;
		last--;
	}

	return true;
}

int main() {
	cout << IsPalindrom("gentleman");
	return 0;
}
