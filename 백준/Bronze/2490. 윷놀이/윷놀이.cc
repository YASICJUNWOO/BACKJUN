#include <iostream>
using namespace std;

int main() {
	int a[4];

	for (int i = 0;i < 3;i++) {
		int cnt = 0;
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		
		for (int j = 0;j < 4;j++) {
			if (a[j] == 0) {
				cnt++;
			}
		}

		if (cnt == 0)
			cout << 'E';
		else if (cnt == 1)
			cout << 'A';
		else if (cnt == 2)
			cout << 'B';
		else if (cnt == 3)
			cout << 'C';
		else if (cnt == 4)
			cout << 'D';

		cout << '\n';
	}
}