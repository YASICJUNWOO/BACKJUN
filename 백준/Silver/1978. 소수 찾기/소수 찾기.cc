#include <bits/stdc++.h>
using namespace std;

int main() {


	int test;
	cin >> test;

	int num;
	int cnt = 0;

	for (int i = 0;i<test;i++) {
		cin >> num;
		if (num == 1) cnt++;
		else {
			for (int t = 2;t<=sqrt(num);t++) {
				if (num % t == 0) {
					cnt++;
					break;
				}
			}
		}
		

	}
	cout << test-cnt;
}