#include <iostream>
#include <queue>
using namespace std;

//각각 최대힙과 최소힙
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
priority_queue<pair<int, int>> max_heap;

void del() {

}

int main() {
	int test;
	cin >> test;

	while (test--) {
		// 입력 데이터의 수
		int input;
		cin >> input;

		for (int i = 0, i < input; i++) {
			// 한줄 데이터 입력받기
			char c, check_num;
			cin >> c >> check_num;

			//삽입연산일 때
			if (c == 'I') {	
				max_heap.push(make_pair(check_num, i));
				min_heap.push(make_pair(check_num, i));
			}

			//삭제연산일 때
			else if (c == 'D') {
				if (max_heap.empty()) { continue; }
				else if (check_num == 1) {
					max_heap
				}
				else {

				}
			}
		}


	}
}