﻿#include <iostream>
using namespace std;

int main() {
	//테스트 케이스
	int t;
	cin >> t;

	//각 팀의 1회부터 9회까지의 점수를 담는 변수
	int y, k;

	//각 팀의 총 점수 저장할 변수
	int ysum, ksum ;

	for (int i = 0;i<t;i++) {
		ysum = 0; 
		ksum = 0;

		//9번 각 팀 점수 입력받고 총점에 더해준다
		for (int u = 0;u<9;u++) {
			cin >> y>> k;
			ysum += y;
			ksum += k;
		}

		//조건문에 맞게 출력
		if (ysum > ksum)cout << "Yonsei\n";
		else if (ysum <ksum)cout << "Korea\n";
		else if (ysum = ksum)cout << "Draw\n";
	}
}