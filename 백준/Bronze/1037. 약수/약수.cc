#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	int* num = new int[n];

	

	for (int i = 0;i < n;i++) {
		cin >> num[i];
	}

	int A;
	sort(num, num + n);

	if (n % 2 == 0) {
		A = num[0] * num[n - 1];
	}
	else {
		if (n == 1) { A = num[0] * num[0]; }
		else A = num[n / 2]* num[n / 2];
	}

	cout << A;
}