#include <vector>
#include <iostream>
#include <deque>
#include <queue>
using namespace std;

//맵
//가로 세로 index 0은 벽이다
int map[102][102]{ 0, };

int y_move[4] = { 0, 0, 1, -1 };
int x_move[4] = { 1, -1, 0, 0 };

int main() {
	int size;
	cin >> size;
	
	int apple;
	cin >> apple;

	//맵에 사과 위치 업데이트
	while (apple--) {
		int y, x;
		cin >> y >> x;
		map[y][x] = 2;
	}

	//총 시간
	int total_second = 0;
	int snake_size = 1;

	//회전 데이터 입력받음
	int rotate_cnt;
	cin >> rotate_cnt;
	queue<pair<int, char>> rotates;
	while (rotate_cnt--) {
		int rotate;
		char dire;
		cin >> rotate >> dire;
		rotates.push(make_pair(rotate, dire));
	}
	
	//초기 뱀의 위치 삽입
	deque<pair<int, int>> snake;
	snake.push_back(make_pair(1, 1));
	map[1][1] = 1;
	
	//초기 움직임 방향
	int xplus = x_move[0];
	int yplus = y_move[0];

	while (1) {

		 int second = size;
		 char direction;
		if(!rotates.empty()){
			second = rotates.front().first;
			direction = rotates.front().second;
			rotates.pop();
		}
	
		while (second != total_second) {
			total_second++;
			int next_y = snake.front().first + yplus;
			int next_x = snake.front().second + xplus;
			
			//다음 머리가 범위를 벗어났을 때 & 몸일 때는 초 출력하고 종료
			if (next_x > size|| next_y > size|| next_x == 0|| next_y == 0|| (map[next_y][next_x] == 1)){ 
				cout << total_second;
				return 0;
				}

			//머리 추가해주기
			snake.push_front(make_pair(next_y, next_x));

			//사과 없다면 꼬리 삭제
			if (map[next_y][next_x] != 2) {
				map[snake.back().first][snake.back().second] = 0;
				if(snake.size() != 1)
					snake.pop_back();
			}
			if (map[next_y][next_x] == 2) {
				map[next_y][next_x] = 1;
			}
			
			map[next_y][next_x] = 1;
		}

		//세로로 움직이고 있었을 때
		if (xplus == 0) {
			xplus = 1;
			//아래로 움직이고 오른쪽으로 꺾었을 때
			//위로 움직이고 왼쪽으로 꺾었을 때
			if ((yplus == 1 && direction == 'D') || (yplus == -1 && direction == 'L')) {
				xplus = -1;
			}
			yplus = 0;
		}
		//가로로 움직이고 있었을 때
		else {
			yplus = 1;
			//오른쪽으로 움직이고 위로 꺾었을 때
			//왼쪽로 움직이고 위로 꺾었을 때
			if ((xplus == 1 && direction == 'L') || (xplus == -1 && direction == 'D')) {
				yplus = -1;
			}
			xplus = 0;
		}
		
	}

}