#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;

	//로프를 내림차순으로 저장하는 우선순위 큐
	priority_queue<int,vector<int>,greater<int>> ropes;

	//로프 저장
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		ropes.push(input);
	}

	//최대로 들 수 있는 중량
	int max_weight = 0;

	//가장 가벼운 무게를 들 수 있는 로프부터 탐색
	for(int rope_cnt = n; rope_cnt >= 1 ; rope_cnt--){
		//자신의 차례에서 들 수 있는 최대무게 탐색하여 최대무게보다 더 무거우면 업데이트
		if (ropes.top() * rope_cnt > max_weight) {
			max_weight = ropes.top() * rope_cnt;
		}
		ropes.pop();
	}

	cout << max_weight;
}