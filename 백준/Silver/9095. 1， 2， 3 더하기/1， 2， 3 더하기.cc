#include <iostream>
using namespace std;

//각 인덱스에 맞는 횟수 저장할 배열 선언
int num[12];


int main() {
	int test;
	cin >> test;
	
	//계산을 위한 0과 1 초기화
	num[0] = 1;
	num[1] = 1;
	num[2] = 2;

	//점화식에 맞게 횟수 채워주기
	for (int i = 3;i < 12;i++) {
		num[i] = num[i - 1] + num[i - 2] + num[i - 3];
	}

	while (test--) {
		int input;
		cin >> input;
		cout << num[input] << '\n';
	}
}