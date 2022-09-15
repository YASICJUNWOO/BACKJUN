#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int test;
	cin >> test; //테스트 케이스 수 받기

	int num;
	

	for (int i = 0;i < test;i++) {
		vector<int> bit;
		cin >> num;
		while (num > 0) {
			bit.push_back(num % 2);
			num /= 2;
		}

		for (int t = 0;t<bit.size();t++) {
			if (bit[t] == 1) cout << t << ' ';
		}
		cout << '\n';
	}

}