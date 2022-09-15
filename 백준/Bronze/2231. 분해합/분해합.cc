#include <iostream>
using namespace std;

int fun(int num) {
	int sum = num;

	while (num > 10) {
		sum = sum + num % 10;
		num /= 10;
	}
	sum += num;
	return sum;
}

int main() {
	int num;
	cin >> num;

	for (int i = num - 54;i <= num + 54;i++) {
		if (fun(i) == num) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}