#include <iostream>
#include <stack>
#include <queue>
using namespace std;

stack<int> s;
queue<char> q;

//처음 넣을 숫자 1로 설정
int start = 1;

//오름차순으로 stack을 채우는 함수
void Fill_stack(int num) {

	//시작 수부터 num까지 push해주기
	for (int i = start;i <= num;i++) {
		s.push(i);
		start++;
		q.push('+');
	}
}

int main() {
	int test;
	cin >> test;

	

	while (test--) {
		int num;
		cin >> num;

		Fill_stack(num);

		if (s.top() > num) {
			cout << "NO";
			return 0;
		}

		s.pop();
		q.push('-');
	}

	while (!q.empty()) {
		cout << q.front()<<'\n';
		q.pop();
	}
}