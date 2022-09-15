#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tri(500);

int main() {
	int size;
	cin >> size;

	int input;
	for (int i = 0;i < size;i++) {
		for (int j = 0;j < i + 1;j++) {
			cin >> input;
			tri[i].push_back(input);
		}
	}

	for (int i = 1;i < size;i++) {
		tri[i][0] += tri[i - 1][0];
		for (int j = 1;j < i ;j++) {
			tri[i][j] += max(tri[i - 1][j-1], tri[i - 1][j]);
		}
		tri[i][i] += tri[i - 1][i - 1];
	}

	cout<< *max_element(tri[size-1].begin(), tri[size-1].end());
}