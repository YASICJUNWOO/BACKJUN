#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string str;
	vector<char> nums;

	cin >> str;

	for (int i = 0;i < str.length();i++)
		nums.push_back(str[i]);

	sort(nums.begin(), nums.end(),greater<>());

	for (int i = 0;i < str.length();i++)
		cout << nums[i];
}