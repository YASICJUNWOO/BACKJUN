#include <iostream>
using namespace std;

int main() {
	int n[21] = {0,1,};
	int what;

	cin >> what;

	for (int i = 2;i <= what;i++) {
		n[i] = n[i - 2] + n[i - 1];
		
	}
	cout << n[what];
}