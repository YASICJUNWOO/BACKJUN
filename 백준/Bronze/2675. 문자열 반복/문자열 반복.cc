#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t;
	string total[20];
	cin >> t;

	for (int n = 0;n < t;n++) {
		int r = 0;
		string al;


		cin >> r;
		cin >> al;
		for (int y = 0;y < al.length();y++) {
			for (int i = 0;i < r;i++) {
				total[n] = total[n] + al[y];
			}
		}
	}
	for (int n = 0;n < t-1;n++) {
		cout << total[n] << endl;
	}
	cout << total[t-1];
}
