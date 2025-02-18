﻿#include <iostream>
#include <vector>
using namespace std;

#define Not_Visited 0;
#define Visited 1;

//감염시킨 컴퓨터의 수
int cnt = 0;

//각 컴퓨터의 정보를 저장하는 Computer 클래스
class Computer {
public:
	int IsVisited; //방문 여부
	int data; //노드 숫자
	vector<Computer*> list; //인접한 컴퓨터 저장

	Computer(int data) {
		IsVisited = 0;
		this->data = data;
	}
	~Computer() {}
};

//전체 컴퓨터를 저장하는 리스트
vector<Computer*> C_List(102, NULL);

//컴퓨터의 숫자를 받으면 컴퓨터를 리턴해준다
Computer* find(int num) {
	for (int i = 1; i < C_List.size(); i++) {
		if (C_List[i]->data == num) {
			return C_List[i];
		}
	}
	return NULL;
}

//컴퓨터 사이의 엣지를 삽입한다
void insertEdge(int n1, int n2) {
	Computer* c1 = find(n1);
	Computer* c2 = find(n2);

	C_List[n1]->list.push_back(c2);
	C_List[n2]->list.push_back(c1);
}

//DFS실행하는 함수
void DFS(int NUM) {
	
	//c1을 찾고 방문한걸로 업데이트 해줌
	Computer* c1 = find(NUM);
	c1->IsVisited = Visited;

	//cnt를 업데이트 해준 후 인접 컴퓨터중 방문하지 않았다면 재귀실행
	for (int i = 0; i < c1->list.size(); i++) {
		if (c1->list[i]->IsVisited == 0) {
			cnt++;
			DFS(c1->list[i]->data);
		}
	}
}

int main() {
	int Cnum;
	cin >> Cnum;

	int edgeNum;
	cin >> edgeNum;

	//1부터 Computer 객체 만들어 c에 저장
	for (int i = 1; i <= Cnum;i++) {
		Computer* c = new Computer(i);
		C_List[i] = c;
	}

	//컴퓨터 사이의 엣지 추가
	while (edgeNum--) {
		int input1, input2;
		cin >> input1 >> input2;

		insertEdge(input1, input2);
	}

	//1번을 시작으로 DFS실행
	DFS(1);
	cout << cnt;
}