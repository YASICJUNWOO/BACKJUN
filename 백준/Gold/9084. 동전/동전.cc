#include <iostream>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;

	//indexdml 금액을 달성하는 방법의 개수
	vector<int> total_cnt(10000, 0);

	while(test--){
		//코인 종류 개수 입력
		int coin_cnt;
		cin >> coin_cnt;

		//코인 종류 입력
		vector<int> coin_list;
		for (int i = 0; i < coin_cnt;i++) {
			int input;
			cin >> input;
			coin_list.push_back(input);
		}

		//방법을 찾아야하는 목표 금액
		int target_money;
		cin >> target_money;

		//코인 종류만큼 반복
		for (int i = 0;i < coin_cnt;i++) {
			//처음 자기자신의 금액 업데이트
			total_cnt[coin_list[i]]++;
			for (int j = coin_list[i] + 1;j <= target_money;j++) {
				total_cnt[j] += total_cnt[j - coin_list[i]];
			}
		}

		cout << total_cnt[target_money]<<'\n';

		for (int i = 0;i < 10000;i++) {
			total_cnt[i] = 0;
		}
	}
	
}