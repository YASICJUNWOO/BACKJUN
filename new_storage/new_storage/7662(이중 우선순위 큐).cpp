#include <iostream>
#include <queue>
using namespace std;

//���� �ִ����� �ּ���
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
priority_queue<pair<int, int>> max_heap;

void del() {

}

int main() {
	int test;
	cin >> test;

	while (test--) {
		// �Է� �������� ��
		int input;
		cin >> input;

		for (int i = 0, i < input; i++) {
			// ���� ������ �Է¹ޱ�
			char c, check_num;
			cin >> c >> check_num;

			//���Կ����� ��
			if (c == 'I') {	
				max_heap.push(make_pair(check_num, i));
				min_heap.push(make_pair(check_num, i));
			}

			//���������� ��
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