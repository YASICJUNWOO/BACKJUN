#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	int al[26];
	for (int i = 0;i < 26;i++) {
		 al[i] = -1;
	}

	cin >> s;

	for (int i = 0;i < s.length();i++) {
		int m = s[i] - 97;  //그 자리에서의 알파벳 아스키 코드
		if (al[m] == -1) {
			al[m] = i;
		}
	}

	for (int i = 0;i<26;i++) {
		cout << al[i] << " ";
	}
}