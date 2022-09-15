#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	cin >> num;
	while (num) {

		vector<int> nums;

		while (num > 0) {
			nums.push_back(num % 10);
			num /= 10;
		}

		int size = nums.size();
		int idx2 = size-1;
		int idx = 0;
		bool check=1;
		
		if (size % 2 == 0) {
			while (idx2+1 != idx ) {
				if (nums[idx] != nums[idx2]) {
					check = false;
					break;
				}
				idx2--;
				idx++;
			}
		}
		else {
			while (idx2 != idx) {
				if (nums[idx] != nums[idx2]) {
					check = false;
					break;
				}
				idx2--;
				idx++;
			}
		}
		if (check)
			cout << "yes\n";
		else
			cout << "no\n";
		
		cin >> num;
	}
}