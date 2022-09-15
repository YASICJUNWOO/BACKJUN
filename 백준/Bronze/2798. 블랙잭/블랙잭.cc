#include <iostream>
using namespace std;

int main() {

	int n, m;
	int sum = 0;
	
	cin >> n >> m;

	int result = 0;
	int card[100];

	for (int i = 0;i < n;i++) {

		cin >> card[i];

	}

	//제일 큰 수
	for (int y=n-1 ;y>=2;y--) {

		
		for (int z = y - 1;z >= 1;z--) {
			

			for (int w = z - 1;w >= 0;w--) {
				sum = 0;
				sum += card[y];
				sum += card[z];
				sum += card[w];

				if (sum <= m && sum > result) {
					result = sum;
				}
				
				
			}
		}

	}

	cout << result;
}