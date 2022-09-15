#include <bits/stdc++.h>
using namespace std;

int main() {

	long test, max;
	cin >> test >> max;

	vector<long > money;

	for (int i = 0;i < test;i++) {
		int m;
		cin >> m;
		money.push_back(m);
	}

	long sum = 0;

	for (int i = 0;i<max;i++) {
		sum += money[i];
	}
	
	long max_money = sum;

	for (int i = 0;i<test-max;i++) {
		sum -= money[i];
		sum += money[i + max];
		if (max_money < sum) {
			max_money = sum;
		}
	}

	cout << max_money;
}