#include <bits/stdc++.h>
using namespace std;

int main() {

	int test;
	cin >> test;
	

	for (int i = 0;i < test;i++) {
		int arr[10] = { 0, };

		for (int t = 0;t < 10;t++) {
			cin >> arr[t];
		}

		sort(arr, arr + 10);
		cout << arr[7]<<'\n';
	}

}