#include <iostream>
#include <vector>
using namespace std;


void MoveStrings(vector<string>& source, vector<string>& destination) {

	for(auto i : source) {
		destination.push_back(i);
	}
	source.clear();
}


int main() {

	//vector<string> source = {"a", "b", "c"};
	//vector<string> destination = {"z"};
	//MoveStrings(source, destination);

	/*for(auto i : source) {
		cout << i;
	}
	for(auto i : destination) {
			cout << i << endl;
	}*/

	return 0;
}
