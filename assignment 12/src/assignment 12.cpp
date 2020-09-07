#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool IsPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {


	vector<string> res;

	for(auto i : words) {
		if(i.size() >= minLength && IsPalindrom(i) ) {
			res.push_back(i);
		}
	}


	return res;
}


int main() {

	vector<string> vect;

	vect.push_back("abacaba");
	vect.push_back("aba");

	vector<string> res = PalindromFilter(vect, 5);

	for(auto i : res) {
		cout << i;
	}

	return 0;
}
