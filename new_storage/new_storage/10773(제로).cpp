﻿#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k; // 테스트 케이스
	int m; 
	int sum=0; //총액 저장할 변수

	cin >> k;

	//금액을 담을 벡터 money
	vector<int> money;

	/* 입력 받은 수가 0이 아니라면 벡터의 추가
	0이라면 최근에 입력받은 수 지우기*/
	for (int i = 0;i < k;i++) {
		cin >> m;
		if (m != 0) money.push_back(m);
		else if (m == 0) money.pop_back();
	}
	
	//총액 계산하기
	for (int t = 0;t<money.size();t++) {
		sum += money[t];
	}

	cout << sum;
}