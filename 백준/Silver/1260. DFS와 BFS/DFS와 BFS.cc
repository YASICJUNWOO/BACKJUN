#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

#define VISITED -1;

//인접행렬 생성
vector<vector<int>> Dmatrix(1001, vector<int>(1001,0));
vector<vector<int>> Bmatrix(1001, vector<int>(1001,0));

vector<int> vertex_list(1001, 0);

void DSearchVertex(int input) {
	vertex_list[input] = VISITED;
	cout << input<< ' ';
	for (int i = 1;i < 1001;i++) {
		if ((Dmatrix[input][i] != 0) && (vertex_list[i]!=-1)) {
			DSearchVertex(i);
		}
	}
}

void BSearchVertex(int input) {
	queue<int> q;
	q.push(input);
	cout << input << ' ';
	vertex_list[input] = VISITED;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 1;i < 1001;i++) {
			if ((Dmatrix[x][i] != 0) && (vertex_list[i] != -1)) {
				q.push(i);
				cout << i << ' ';
				vertex_list[i] = VISITED;
			}
		}
	}
}

int main() {
	int vertex, edge, v_num;

	cin >> vertex >> edge >> v_num;

	int input1, input2;
	while (edge--) {
		cin >> input1>>input2;
		Dmatrix[input1][input2]++;
		Dmatrix[input2][input1]++;
		Bmatrix[input1][input2]++;
		Bmatrix[input2][input1]++;
	}

	DSearchVertex(v_num);
	for (int i = 0;i < 1001;i++) {
		vertex_list[i] = 0;
	}

	cout << '\n';
	BSearchVertex(v_num);
	
	
}