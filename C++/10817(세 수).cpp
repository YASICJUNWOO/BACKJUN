﻿#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[3];

	//배열에 숫자 3개 저장
	for (int i = 0;i < 3;i++) {
		cin >> arr[i];
	}

	//sort 오름차순으로 정렬
	sort(arr, arr + 3);


	//가운데값 출력
	cout << arr[1];
}