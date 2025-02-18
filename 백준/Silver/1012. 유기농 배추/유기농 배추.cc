#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//배추 심어진 좌표 저장할 큐 생성
queue<pair<int, int>> isBaechu;

//배추밭 vector 이중배열로 생성
vector<vector<int>> field(52, vector<int>(52, -2));

int moveX[4] = { -1,1,0,0 };
int moveY[4] = { 0,0,-1,1 };

void DeleteDFS(int x, int y) {
	//주변 정보 저장할 큐 생성
	queue<pair<int, int>> surround;

	//해당 좌표 0으로 변경
	field[y][x] = 0;

	//주변정보 탐색하여 1이면 큐에 저장
	for (int i = 0;i < 4;i++) {
		int lastX = x + moveX[i];
		int lastY = y + moveY[i];

		if (field[lastY][lastX] == 1) {
			surround.push(make_pair(lastX, lastY));
		}
	}

	//주변 좌표 DFS수행
	while (!surround.empty()) {
		DeleteDFS(surround.front().first, surround.front().second);
		surround.pop();
	}

}

int findWormNum() {
	//구역 수 저장할 변수
	int cnt = 0;

	while (!isBaechu.empty()) {

		//배추의 좌표정보 받고 삭제
		int y = isBaechu.front().first;
		int x = isBaechu.front().second;

		isBaechu.pop();

		//좌표 1이면 DFS수행하고 구역 수 업데이트
		if (field[y][x] == 1) {
			DeleteDFS(x, y);
			cnt++;
		}
	}
	return cnt;
}

void reset() {
	for (int i = 0;i < 52;i++) {
		for (int j = 0;j < 52;j++) {
			field[i][j] = -2;
		}
	}
}

int main() {
	//테스트케이스 입력받기
	int test;
	int width, height, baechu;
	cin >> test;
	

	while (test--) {
		//배추 정보 입력받기
		cin >> width >> height >> baechu;

		//배추가 심어져있는 좌표 field에 업데이트
		while (baechu--){
			int x, y;
			cin >> x >> y;
			field[y + 1][x + 1] =1;
			
			//배추 정보 isBaechu에 저장
			isBaechu.push(make_pair(y + 1, x + 1));
		}

		cout<<findWormNum()<<'\n';

		reset();
	}
}