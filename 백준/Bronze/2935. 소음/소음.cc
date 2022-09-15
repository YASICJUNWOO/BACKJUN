#include <iostream>
#include <string>
using namespace std;

char* clare(int a, int b);

int main() {
	string a, b;
	char cal;
	

	cin >> a >> cal >> b;

	int along = a.length();
	int blong = b.length();

	//곱하기 일때
	if (cal == '*') {
		int max =  along + blong - 1; //결과의 자리수 max

		cout << '1';
		for (int i = 0;i<max-1;i++) {
			cout << '0';
		}
	}

	//더하기 일때
	else if (cal == '+') {
		char *arr;
		if (along > blong) {
			arr=clare(along, blong);
			for (int i = 0;i < along;i++) cout << arr[i];
		}
		else if(blong > along) {
			arr = clare(blong, along);
			for (int i = 0;i < blong;i++) cout << arr[i];
		}
		

		

		//같을 때
		if (along == blong) {
			arr = clare(blong, along);
			arr[0] = '2';
			for (int i = 0;i < along;i++) cout << arr[i];
			return 0;
		}

		
		
	}

}

char *clare(int a, int b) {
	int big=a, rest=b;

	//큰 자리수대로 배열 선언
	char* plus = new char[big]();

	plus[0] = '1'; //첫자리는 1
	for (int i = 1;i < big;i++) plus[i] = '0'; //나머지 배열 0으로 초기화

	//작은 자리의 수 1
	plus[big - rest] = '1';

	return plus;

}