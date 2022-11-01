#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;

	int bit = 0;

	while (test--) {
		string str;
		cin >> str;

		int input;

		if (str == "add") {
			cin >> input;
			bit = bit | (1 << input-1);
		}
		else if (str == "check") {
			cin >> input;
			if ((bit & (1 << input - 1)) == 0)
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		else if (str == "remove") {
			cin >> input;
			bit = bit & ~(1 << input - 1);
		}
		else if (str == "toggle") {
			cin >> input;
			bit = bit ^ (1 << input - 1);
		}
		else if (str == "all") {
			bit = 0;
			for (int n = 1;n <= 20;n++) {
				bit = bit | (1 << n - 1);
			}
		}
		else if (str == "empty") {
			bit = 0;
		}
	}
}