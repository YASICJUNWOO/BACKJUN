#include <iostream>
using namespace std;

int main() {

	//결과값 받기
	unsigned long  re;
	cin >> re;

	//최대값수 저장할 변수
	unsigned long  cnt=0;
	unsigned long  sum = 0;

	while (sum<=re) {
		cnt++;
		sum += cnt;
		

	}

	// 최대에 도달하고 while 문 한번 더돌기때문에 -1해준다
	cout << cnt - 1;
}