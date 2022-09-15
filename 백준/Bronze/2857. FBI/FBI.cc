#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string name;
	vector<int> check;

	for (int k = 1;k <= 5;k++){
		cin >> name;
		for (int i = 0;i < name.length();i++) {
			if (i < 8 && name[i] == 'F' && name[i + 1] == 'B' && name[i + 2] == 'I') {
				check.push_back(k);
				break;
			}
		}
	}

	if (check.empty()) {
		cout << "HE GOT AWAY!";
	}
	else {
		for (int i = 0;i < check.size();i++) {
			cout << check[i] << ' ';
		}
	}
}