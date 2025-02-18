﻿#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define SIZE 100001;

//위치 나타내는 point 벡터
vector<pair<int,int>> point;
int subin, dong;

int BFS(int subin) {

	//bfs를 위한 큐 생성
	queue<int> bfs;
	//초기 subin값 큐에 삽입
	bfs.push(subin);

	while (!bfs.empty()) {

		//subin 업데이트
		subin = bfs.front();
		point[subin].first = 1;
		bfs.pop();

		//이동할 3가지 인덱스 저장
		int index[3] = { subin - 1,  subin + 1, subin * 2 };

		//3개의 인덱스 탐색
		for (int i = 0;i < 3;i++)
		{
			//index가 범위 안에 있을 때
			if (index[i] >= 0 && index[i] <= 100000) {

				//만약 탐색할 인덱스가 동생 위치라면 최소값 반환
				if (index[i] == dong)
					return min(point[subin].second + 1, point[index[i]].second);

				//인덱스 위치의 값 업데이트 해주기
				point[index[i]].second = min(point[subin].second + 1, point[index[i]].second);

				if(point[index[i]].first == 0)
					//인덱스 위치 큐에 삽입
					bfs.push(index[i]);
			}
		}
	}
}
	

int main() {
	
	cin >> subin >> dong;

	for (int i = 0;i < 100001;i++) {
		point.push_back(make_pair(0, 1000001));
	}

	//초기 수빈의 값 출력
	point[subin].second =  0;
	
	//함수값 출력
	cout<<BFS(subin);
}
