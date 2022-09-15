#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> matrix(52);
vector<vector<int>> party_list(52);
queue<int> know_list;
int isKnow[52]{ 0, };



void liar_update(int data) {

	for (int num : matrix[data]) {
		if (isKnow[num] == 0) {
			know_list.push(num);
			isKnow[num]=1;
		}
	}

}

int main() {
	
	int people, party;
	cin >> people >> party;


	//아는 사람 받고 업데이트
	int know_num;
	cin >> know_num;
	while (know_num--) {
		int input;
		cin >> input;
		know_list.push(input);
		isKnow[input] = 1;
	}


	for (int p = 0; p < party; p++) {

		int input;
		cin >> input;

		int pre;
		cin >> pre;
		party_list[p].push_back(pre);

		for (int k = 1; k < input; k++) {
			int know;
			cin >> know;

			matrix[pre].push_back(know);
			matrix[know].push_back(pre);
			pre = know;
			party_list[p].push_back(pre);
		}
	}

	int idx = 0;
	while(!know_list.empty()){
		liar_update(know_list.front());
		know_list.pop();
	}

	int cnt = party;
	for (int p = 0; p < party; p++) {
		for (int data : party_list[p]) {
			if (isKnow[data] == 1) {
				cnt--;
				break;
			}
		}
	}

	cout << cnt;
	
}