﻿#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> v; //수열을 저장할 벡터

	int sum = 0;

	int num = 1;

	int start, end;
	cin >> start >> end;

	while (v.size()<end) { //구간 마지막 숫자의 크기보다 적게 수열이 저장되었다면
			for (int t = 0;t < num;t++) { //num 만큼 num 벡터에 저장
				v.push_back(num);
			}
			num++ ;
	}

	for (int i = start - 1;i <= end - 1;i++) {  //구간의 합 구하기
		sum += v[i];
	}

	cout << sum;
}



