#include <iostream>
#include <queue>
using namespace std;

//greater를 사용해 오름차순 우선순위 큐 생성
priority_queue<long, vector<long>, greater<long>> pq;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//테스트 케이스
	int test;
	cin >> test;

	while (test--) {

		//수 입력받기
		long input;
		cin >> input;

		//입력받은 수가 0일 때
		if (input == 0) {

			//큐가 비었으면 0 출력, 아니면 맨 위 값 출력하고 pop
			if (pq.empty())
				cout << 0<<'\n';
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}

		//0이 아니면 삽입
		else {
			pq.push(input);
		}

	}

}