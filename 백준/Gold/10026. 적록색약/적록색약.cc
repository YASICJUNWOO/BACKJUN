#include<iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

//좌표 클래스
class Point {
public:
	int x;
	int y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~Point(){}
};

//monitor에 저장될 Data 클래스
class Data {
public:
	char color;
	int isVisited = 0;
	
	Data(char color) { this->color = color; }
	~Data(){}
};

//크기
int n;

//Data클래스 저장할 벡터
vector<vector<Data*>> monitor(105, vector<Data*>(105, new Data(' ')));

queue<Point*>* R_Point = new queue<Point*>;
queue<Point*>* G_Point = new queue<Point*>;
queue<Point*>* B_Point = new queue<Point*>;


int moveX[4] = { -1,1,0,0 };
int moveY[4] = { 0,0,-1,1 };

int Check_Sector(Point* p) {
	//monitor탐색을 위한 큐
	queue<Point*> storage;
	
	//색에 따른 변수 업데이트
	char check_color = monitor[p->y][p->x]->color;

	int SectorColor = 0;
	queue<Point*>* QueueColor = R_Point;

	if (check_color == 'G') 
		QueueColor = G_Point;
	else if (check_color == 'B') 
		QueueColor = B_Point;
	//끝

	//각 색상큐에 저장된 모든 좌표클래스포인터 탐색
	while (!QueueColor->empty()) {

			int CheckX = QueueColor->front()->x;
			int Checky = QueueColor->front()->y;

			if (monitor[Checky][CheckX]->isVisited == 0) {
				monitor[Checky][CheckX]->isVisited = 1;
				SectorColor++;
				storage.push(QueueColor->front());
			}		
			QueueColor->pop();

			//구역 모두 업데이트
			while (!storage.empty()) {
				int x = storage.front()->x;
				int y = storage.front()->y;
				storage.pop();

				for (int i = 0; i < 4; i++) {

					int newX = x + moveX[i];
					int newY = y + moveY[i];
					if (monitor[newY][newX]->color == check_color
						&& monitor[newY][newX]->isVisited == 0) {
						monitor[newY][newX]->isVisited = 1;
						Point* point = new Point(newX, newY);
						storage.push(point);
					}
				}

			}
		
	}

	return SectorColor ;
}

//초기화
void reset() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			char color = monitor[i][j]->color;
			monitor[i][j]->isVisited = 0;

			//각 색상에 맞게 큐에 좌표 클래스 저장해준다
			Point* point = new Point(j, i);
			if (color == 'B')
				B_Point->push(point);
			else if (color == 'G') 
				G_Point->push(point);
			else {
				G_Point->push(point);
				monitor[i][j]->color = 'G';
			}
			

		}
	}
}

int main() {

	//RGB 저장하는 과정
	cin >> n;

	string str;
	char color;

	for (int i = 1; i <= n; i++) {
		cin >> str;
		for (int j = 1; j <= n; j++) {
			 color = str[j - 1];
			 Data* data = new Data(color);
			 monitor[i][j] = data;

			 //각 색상에 맞게 큐에 좌표 클래스 저장해준다
			 Point* point = new Point(j, i);
			 if (color == 'R')
				 R_Point->push(point);
			 else if(color=='G')
				 G_Point->push(point);
			 else
				 B_Point->push(point);
		
		}
	}

	//구역 수 구하기
	int R_Sector = Check_Sector(R_Point->front());
	int G_Sector = Check_Sector(G_Point->front());
	int B_Sector = Check_Sector(B_Point->front());
	cout << R_Sector + G_Sector + B_Sector<<' ';

	reset();

	int B_Sector2 = Check_Sector(B_Point->front());
	int G_Sector2 = Check_Sector(G_Point->front());
	cout << G_Sector2 + B_Sector2;

}