﻿#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num; //멀티탭의 개수

	int sum=0;  //총 꽂을 수 있는 컴퓨터 개수

	int plug; //플러그마다 꽂을 수 있는 개수

	//마지막 플러그를 제외한 총 꽂을 수 있는 개수
	for(int i=0;i<num-1;i++){
		cin >> plug;
		sum += plug - 1;
	}

	//마지막 플러그의 꽂을 수 있는 개수
	cin >> plug;
	sum += plug;

	cout << sum;
}