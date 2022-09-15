#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int num, k;
	cin >> num >> k;

	vector<int> yak;

	for (int i = num;i > 0;i--) {
		if (num % i == 0) {
			yak.push_back(i);
		}
	}

	sort(yak.begin(), yak.end());

	if (yak.size() < k) cout << '0';
	else cout << yak[k-1];
}