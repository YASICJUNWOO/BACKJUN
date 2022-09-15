#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	int index = 0;
	while (len >= 10) {
		for (int i = index;i < index + 10;i++) {
			cout << str[i];
		}
		cout << '\n';
		len -= 10;
		index += 10;
	}

	for (int i = index;i < index + len;i++) {
		cout << str[i];
	}
}