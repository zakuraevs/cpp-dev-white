#include <iostream>
#include <vector>;
using namespace std;


vector<int> Reversed(const vector<int>& v) {
	vector<int> reverse;

	int i = v.size()-1;

	while (i >= 0) {

		reverse.push_back(v[i]);

		i--;

	}



	return reverse;

}


int main() {

	vector<int> v;

	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);


	for(auto i : Reversed(v)) {
		cout << i << ", ";
	}

	return 0;
}
