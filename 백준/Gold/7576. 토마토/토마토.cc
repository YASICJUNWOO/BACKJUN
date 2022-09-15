#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//주변 좌표를 탐색할 수 있도록 인덱스에 더할 값 배열 저장
int xPoint[4] = {-1, 0, 1, 0};
int yPoint[4] = {0, -1, 0, 1};

int MaxDate = 0;

//토마토 판의 너비,높이
int width, height;

//좌표 저장하는 포인트 클래스
class Point{
public:
	int x;
	int y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point(){}
};

// 토마토 판 생성
vector<vector<int>> matrix(1002, vector<int>(1002, -2));

//좌표 저장할 큐
queue<Point*> Point_List;

bool IsThereZero() {
	for (int h = 1; h <= height; h++) {
		for (int w = 1; w <= width; w++) {
			if (matrix[h][w] == 0)
				return true;
		}
	}
	return false;
}

void Destory() {
	
	//주변에 0이 없을 때까지 수행
	while (!Point_List.empty()) {

		//큐 안의 모든 point 탐색
		for (int i = 0; i < Point_List.size(); i++) {
			Point* p = Point_List.front();
			Point_List.pop();

			//현재 point의 x,y
			int currentX = p->x;
			int currentY = p->y;

			//주변 탐색할 index값 선언
			int xp, yp;

			//주변 탐색하며 0이면 현재 포인트의 +1값으로 업데이트 해주고 큐에 넣기
			for (int n = 0; n < 4; n++) {
				xp = currentX + xPoint[n];
				yp = currentY + yPoint[n];

				if (matrix[xp][yp] == 0) {
					Point* p = new Point(xp, yp);
					matrix[xp][yp] = matrix[currentX][currentY] + 1;

					//만약 해당 포인트값이 MaxDate보다 클때 업데이트
					if ((matrix[xp][yp] - 1) > MaxDate) {
						MaxDate = (matrix[xp][yp] - 1);
					}

					Point_List.push(p);
				}
			}

		}
	}
	if (IsThereZero())
		cout << -1;
	else
		cout << MaxDate;
}

int main() {
	
	cin >> width >> height;

	for (int h = 1; h <= height; h++) {
		for (int w = 1; w <= width; w++) {

			int input;
			cin >> input;

			//한 칸씩 숫자삽입
			matrix[h][w] = input;

			//만약 1이라면 시작점이므로 Point_List 큐에 저장
			if (input == 1) {
				Point* p = new Point(h, w);
				Point_List.push(p);
			}

		}
	}

	Destory();
}