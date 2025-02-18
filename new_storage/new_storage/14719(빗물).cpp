﻿#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;

	int cnt = 0;

	//2중 배열로 world 생성
	int** world = new int* [h] {0, };
	
	for (int i = 0;i<h;i++) {
		world[i] = new int[w] {0, };
	}
	
	for (int i = 0;i < w;i++) {
		int block;
		cin >> block;

		for (int t = 0;t<block;t++) {
			world[h-1-t][i]=1;
		}
	}

	bool right_ok=true, left_ok=true;

	//양끝이면
	for (int i = 0;i < h;i++) {
		if (world[i][0] == 0) world[i][0] = 2;
		if(world[i][w-1] == 0) world[i][w - 1] = 2;
	}

	for (int i = 0;i<h;i++) {
		for (int t = 0;t < w;t++) {
			if (world[i][t]==0) {

				//왼쪽을 탐색할 수 있을떄
				if (t - 1 >= 0) {
					if (world[i][t-1] == 2) world[i][t] = 2;
				}

				//오른쪽을 탐색할 수 있을떄
				if (t + 1 <= w-1) {
					if (world[i][t+1] == 2) world[i][t] = 2;
				}

			}

		}
	}

	for (int i = 0;i < h;i++) {
		for (int t = w-1;t > -1 ;t--) {
			if (world[i][t] == 0) {

				//오른쪽을 탐색할 수 있을떄
				if (t + 1 <= w - 1) {
					if (world[i][t+1] == 2) world[i][t] = 2;
				}

				//왼쪽을 탐색할 수 있을떄
				if (t - 1 >= 0) {
					if (world[i][t-1] == 2) world[i][t] = 2;
				}


			}

		}
	}

	for (int i = 0;i < h;i++) {
		for (int t = 0;t < w;t++) {
			if (world[i][t] == 0) {
				cnt++;
			}
		}
		
	}
	cout << cnt;
	
}