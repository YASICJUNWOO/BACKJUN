﻿#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int test;
	cin >> test; //테스트 케이스 입력받음
	

	for (int i = 0;i < test;i++) {
		int arr[10] = { 0, };  //10개의 정수 입력받을 배열 생성

		for (int t = 0;t < 10;t++) {
			cin >> arr[t];  //배열에 정수 입력받기
		}

		sort(arr, arr + 10); //오름차순으로 정렬
		cout << arr[7]<<'\n';  //3번째로 큰 수 = 오름차순으로 8번째 수
	}

}