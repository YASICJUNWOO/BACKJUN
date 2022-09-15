#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

//미로 표
vector<vector<int>> miro(102, vector<int>(102, -1));
//방문 확인용
vector<vector<int>> isVisited(102, vector<int>(102, 0));

//축 이동
int MovePointx[4] = { -1,1,0,0 };
int MovePointy[4] = { 0,0,-1,1 };

//행,렬
int height, width;



void FindMin(int x, int y) {

	//bfs를 위한 좌표저장 큐
	queue<pair<int, int>> Point_List;

	Point_List.push(make_pair(x, y));

	while (!Point_List.empty()) {
		int x = Point_List.front().first;
		int y = Point_List.front().second;

		//현재 걸린 거리
		int distance = miro[x][y];

		for (int i = 0;i < 4;i++) {
			int CheckX = x + MovePointx[i];
			int CheckY = y + MovePointy[i];

			//저장된 수가 -1이나 0이 아니고 방문한 적이 없을 때
			if (miro[CheckX][CheckY] > 0 && isVisited[CheckX][CheckY] == 0) {
				//좌표를 탐색한 것으로 업데이트
				isVisited[CheckX][CheckY] = 1;
				//거리인 저장된 수 업데이트
				miro[CheckX][CheckY] += distance;
				Point_List.push(make_pair(CheckX, CheckY));
			}
		}
		Point_List.pop();
	}
}

int main() {
	
	//행,렬 입력받기
	cin >> height >> width;

	//미로 입력받기 위한 string
	string line;

	for (int j = 1;j <= height;j++) {
		
		//한 줄 입력받기
		cin >> line;

		// 한글자씩 숫자로 변환하여 miro에 저장
		for (int i = 1;i <= width;i++) {
			miro[j][i] = (line[i-1] - '0');
		}
	}

	//1,1부터 탐색
	isVisited[1][1] = 1;
	FindMin(1, 1);
	
	cout << miro[height][width];
}