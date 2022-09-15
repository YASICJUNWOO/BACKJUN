#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;



//더해줄 포인트 값 배열
int plusX[4] = {0, 0, 1, -1};
int plusY[4] = {1, -1, 0, 0};

//행, 렬, 맵
int row, col;

vector<vector<pair<char, int>>> alphabet(20, vector<pair<char, int>>(20));

//갈 수 있는 최대 횟수
int max_cnt = 0;

vector<char> find_list;

void dfs(int level, int y, int x) {
	//현 위치의 알파벳 값
	char current_alphabet = alphabet[y][x].first;
	
	//방문한 알파벳 중 중복이 없을 떄
	if (find(find_list.begin(), find_list.end(), current_alphabet) == find_list.end()) {
		find_list.push_back(current_alphabet);
		level++;
		alphabet[y][x].second = 1;
	}
	//중복이 있을 때
	else {
		max_cnt = max(max_cnt,level); //지금의 레벨과 max 비교한 뒤 return
		return;
	}

	for (int i = 0;i < 4;i++) {
		int nextY = y + plusY[i];
		int nextX = x + plusX[i];

		if (nextX >= 0 && nextY >= 0 && nextX < col && nextY < row && alphabet[nextY][nextX].second == 0) {
			dfs(level, nextY, nextX);
		}
	}
	max_cnt = max(max_cnt, level);
	alphabet[y][x].second = 0;
	find_list.erase(find_list.end() - 1);

	return;
}

int main() {
	cin >> row >> col;
	
	//맵 초기화
	for (int i = 0;i < row;i++) {
		string str;
		cin >> str;
		for (int j = 0;j < col;j++) {
			alphabet[i][j] = make_pair(str[j], 0);
		}
	}
	
	dfs(0, 0, 0);
	cout << max_cnt;
}