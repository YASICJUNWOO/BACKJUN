#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	int num[1001];

	int array[1001];
	array[0] = -1001;


	for (int i = 1;i <= n;i++) {
		cin >> num[i-1];
		array[i] = 1001;
	}

	for (int y = 1;y <= n;y++) {
		for (int i = 0;i < n;i++) {
			if (num[i] < array[y]&& num[i] > array[y-1]) {
				array[y] = num[i];
			}
			
		}
	}

	for (int i = 1;i <= n;i++) {
		cout << array[i]<<endl;
	}
}