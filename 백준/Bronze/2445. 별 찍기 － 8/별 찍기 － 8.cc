#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;


	for (int i = 1;i <= n;i++) {
		for (int t = 1;t<=i;t++) {
			cout << "*";
		}
		for (int t = 2*(n - 1);t > 2*(i-1);t--) {
			cout << " ";
		}
		for (int t = 1;t <= i;t++) {
			cout << "*";
		}
		cout << '\n';
	}

	for (int i = 1;i < n;i++) {
		for (int t = n;t > i;t--) {
			cout << "*";
		}
		for (int t = 0 ; t < i*2;t++) {
			cout << " ";
		}
		for (int t = n;t > i;t--) {
			cout << "*";
		}
		if (i == n - 1)break;
		cout << '\n';
	}
}