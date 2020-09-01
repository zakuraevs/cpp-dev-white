#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	vector<int> bin;

	cin >> n;

	while (n > 0) {
		bin.push_back(n%2);
		n = n/2;
	}

	int i = bin.size() - 1;
	while (i >= 0) {
		cout << bin[i];
		i--;
	}


	return 0;
}
