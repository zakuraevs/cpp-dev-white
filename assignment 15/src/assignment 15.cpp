#include <iostream>
#include <vector>;
using namespace std;


void Reverse(vector<int>& v) {
	vector<int> reverse;

	int i = v.size()-1;

	while (i >= 0) {

		reverse.push_back(v[i]);

		i--;

	}



	v = reverse;


}


int main() {

	vector<int> v;

	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);

	Reverse(v);

	for(auto i : v) {
		cout << i << ", ";
	}

	return 0;
}
