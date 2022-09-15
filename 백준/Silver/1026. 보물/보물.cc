#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	int A[51];
	int B[51];

	int B1[101]={0, };
	int check[51]={0, };

	int sum = 0;

	for (int i = 0;i < n;i++) {
		cin >> A[i];
	}
	for (int i = 0;i < n;i++) {
		cin >> B[i];
	}


	for (int i = 0;i < n - 1;i++) {
		for (int j = i+1;j < n;j++) {
			if (A[i] > A[j]) {
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}

	for (int i = 0;i < n ;i++) {
		int num = B[i];
		B1[num]++;
	}
	/*for (int i = 0;i < 101;i++) {
		if (B1[i] > 0) {
			cout << i << "은 " << B1[i]<<endl;
		}
	}*/
	
	for (int i = 0;i <51;i++) {
		for (int y = 100;y>=0;y--) {
			if (B1[y] > 0) {
				check[i] = y;
				B1[y]--;
				break;
			}
		}
	}
	for (int i = 0;i < n;i++) {
		sum += A[i] * check[i];
	}

	cout << sum;
}