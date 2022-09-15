#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long  n, m;
	cin >> n >> m;

	vector<long long> nums;

	int input;
	while (n--) {
		cin >> input;
		nums.push_back(input);
	}

	sort(nums.begin(), nums.end());

	cout << nums[m-1];
}