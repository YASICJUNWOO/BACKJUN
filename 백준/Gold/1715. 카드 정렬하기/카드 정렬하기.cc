#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;

	int total_cnt = 0;

	priority_queue<int, vector<int>, greater<int>> pq;

	while (n--) {
		int input;
		cin >> input;

		pq.push(input);
	}

	while (pq.size() != 1) {
		int input1, input2;
		input1 = pq.top();
		pq.pop();
		input2 = pq.top();
		pq.pop();

		int hap = input1 + input2;
		pq.push(hap);

		total_cnt = total_cnt + hap;
	}

	cout << total_cnt;
}