#include <iostream>
#include <string>
using namespace std;

int main() {

	int test;
	cin >> test;

	int wrong;
	string word;

	for (int i = 0;i<test;i++) {

		cin >> wrong >> word;

		for (int t = 0;t<word.length();t++) {
			if (t == wrong - 1) continue;
			cout << word[t];
		}
		cout << '\n';
	}

}