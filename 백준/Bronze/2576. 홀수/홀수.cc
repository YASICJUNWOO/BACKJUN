#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num[7];
	int cnt = 0;
	int sum = 0;

	for (int i = 0;i<7;i++) {
		cin >> num[i];
		if (num[i] % 2 == 1) {
			sum += num[i];
		}
	}

	if (sum !=0) {
		cout << sum << endl;

		sort(num, num + 7);

		for (int i = 0;i < 7;i++) {
			if (num[i] % 2 == 1) {
				cout << num[i];
				return 0;
			}
		}
	}
	else cout << "-1";
	
	
}