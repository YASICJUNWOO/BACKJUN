﻿#include<vector>
#include<iostream>
using namespace std;

int main() {
	vector<long> km;
	vector<long> city;

	int city_num;
	cin >> city_num;

	//거리 저장
	for (int i = 0;i < city_num-1;i++) {
		int input;
		cin >> input;
		km.push_back(input);
	}

	//도시당 리터 가격 저장
	for (int i = 0;i < city_num;i++) {
		int input;
		cin >> input;
		city.push_back(input);
	}

	long sum = 0;
	int min = city[0]; // 도시를 거치며 계속 갱신해줄 최소 기름값

	/*도시를 거쳐가며 최소기름 값과 비교하여
	더 작다면 min을 갱신하고 더 크다면 이전에 나왔던 min 값과 거리X기름값*/
	for (int i = 0;i < city_num-1;i++) {
		if (min > city[i])
			min = city[i];
		sum += min * km[i];
	}

	cout << sum;
}