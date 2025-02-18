﻿#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num[7];
	int cnt = 0;
	int sum = 0;
	
	//숫자 7개 입력받으며  홀수이면 sum에 누적해 저장해준다
	for (int i = 0;i<7;i++) {
		cin >> num[i];
		if (num[i] % 2 == 1) {
			sum += num[i];
		}
	}

	//홀수가 있을 때
	if (sum !=0) {
		cout << sum << endl;

		//모든 수 오름차순 정렬
		sort(num, num + 7);

		//작은 수 부터 탐색 후 홀수 있으면 출력하고 종료
		for (int i = 0;i < 7;i++) {
			if (num[i] % 2 == 1) {
				cout << num[i];
				return 0;
			}
		}
	}
	//홀수 없을 때 -1출력
	else cout << "-1";
	
	
}