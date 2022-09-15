#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
	string first;
	string first1;
	string second;
	string second1;

	cin >> first;
	cin >> second;

	for (int i = 2;i >= 0;i--) {
		first1 += first[i];
		second1 += second[i];
	}

	int i = stoi(first1);
	int m = stoi(second1);

	
	if (i > m) {
		cout << i;
	}

	else if (i < m) {
		cout << m;
	}


	}
