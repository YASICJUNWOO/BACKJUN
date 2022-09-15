#include <bits/stdc++.h>
using namespace std;

int main() {

	int min, max;
	cin >> min >> max; //최소값, 최대값 입력받기

	/*int so[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41
		,43,47,53,59,61,67,71,73,79,83,89,97};*/

	vector<int> sosu;
	int sum = 0;
	int check = 0;
	int n = 0;


	for (int i = min;i <= max;i++) {
		check = 0;
		for (int t = 2;t <= sqrt(i);t++) {
			if (i % t == 0) {
				check = -1;
				break;
			}
		}
		if (i == 1)  continue;
		else if (check == 0) {
			sosu.push_back(i);
			sum += i;
		}
	}
	
	if (sosu.empty()) {
		cout << "-1";
		return 0;
	}

	cout << sum << '\n' << sosu[0];
}