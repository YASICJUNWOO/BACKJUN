#include <iostream>
using namespace std;

int main() {

	int test;
	cin >> test;

	int size = test;

	while(test){
		for (int j = size - test;j > 0;j--) {
			cout << ' ';
		}
		for (int i = test;i > 0;i--) {
			cout << '*';
		}
		cout << '\n';
		test--;
	}
}