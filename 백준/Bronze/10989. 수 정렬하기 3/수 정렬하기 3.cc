#include <iostream>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	int num[10001]={0, };
	
	cin >> k;

	for (int i = 0;i<k;i++) {
		int m;
		cin >> m;
		num[m]++;
	}

	for (int i = 0;i <10001;i++) {
		if (num[i]>0) {
			for (int y = num[i];y > 0;y--) {
				cout << i << "\n";
			}
		}
	}
}