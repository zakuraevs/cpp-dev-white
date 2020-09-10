#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	vector<int> a;

	cin >> n;

	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	for(int i=1; i < a.size(); i++){

		int key = a[i];
		int j = i-1;

		while(j > -1 && a[j] > key) {
			a[j+1] = a[j];

			j--;
		}

		a[j+1] = key;

	}

	cout << a[n-1] << " " << a[n-2] << " " << a[n-3] << endl;

	return 0;
}
