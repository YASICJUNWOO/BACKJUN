#include <iostream>
#include <vector>
using namespace std;

int main() {

	int num;
	vector<int> yak;

	cin >> num;

	for (int i = 2;i <= num;i++) {
		if (num == 1) {
			break;
		}
		while (num % i == 0) {
			yak.push_back(i);
			num /= i;
		}
	}

	for (int x : yak) {
		cout << x<<'\n';
	}
}