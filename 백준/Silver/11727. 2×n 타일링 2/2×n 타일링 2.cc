#include <iostream>
using namespace std;

long long block[1005]{0, };

int main() {
	block[1] = 1;
	block[2] = 3;

	int n;
	cin >> n;

	for (int i = 3; i <= n; i++) {
		block[i] = (block[i - 1] + (block[i - 2]*2)) % 10007;
	}
	cout << block[n];
}