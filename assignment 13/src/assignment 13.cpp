#include <iostream>
using namespace std;

void UpdateIfGreater(int first, int& second) {

	if(first > second) {
		second = first;
	}

}


int main() {
	int first, second;
	cin >> first >> second;
	UpdateIfGreater(first, second);
	cout << first << ", " << second << endl; // prints !!!Hello World!!!
	return 0;
}
