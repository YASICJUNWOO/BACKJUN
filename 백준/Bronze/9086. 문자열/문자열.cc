#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	int test;
	cin >> test;

	while (test--) {
		cin >> str;
		if (str.length() == 1)
			cout << str[0] << str[0];
		else
			cout << str[0] << str[str.length()-1];

		cout << endl;

	}
}