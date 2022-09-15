#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,K;
	cin >> N >> K;
	
	int check_num=1;

	queue<int> q;

	for (int i = 1;i <= N;i++)
		q.push(i);

	cout << '<';
	while (q.size() != 1) {
		if (check_num == K) {
			cout << q.front() << ", ";
			q.pop();
			check_num = 1;
		}
		else {
			q.push(q.front());
			q.pop();
			check_num++;
		}
	}

	cout << q.front()<<'>';
}