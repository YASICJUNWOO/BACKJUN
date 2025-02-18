#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int person;  
	cin >> person;  //사람 수 입력받기

	vector<int> time;

	
	for (int i = 0;i < person;i++){  //시간 입력받아서 time 벡터에 저장
		int t;
		cin >> t;
		time.push_back(t);
	}

	sort(time.begin(), time.end());  //오름차순으로 정렬

	int sum = 0; //총 소요시간

	for (int i = 0;i < person;i++) {  //person 수 만큼 수행하며 
		for (int t = 0;t <= i;t++)  //0부터 해당 차례까지 소요시간 더하기
			sum += time[t];
	}

	cout << sum;
}