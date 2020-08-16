#include <iostream>
#include <string>
using namespace std;

int main() {

	string a = "hello";
	string b = a;

	b += ", world";

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;


	return 0;
}
