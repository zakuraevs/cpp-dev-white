#include <iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2, s3;

	cin >> s1 >> s2 >> s3;

	cout << min(min(s1, s2), s3);

	return 0;
}
