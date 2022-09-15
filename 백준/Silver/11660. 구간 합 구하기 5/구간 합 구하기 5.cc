#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int size;
	cin >> size;

	int chance;
	cin >> chance;

	vector<vector<int>> map(size+1, vector<int>(size+1));

	//각 행 / 열의 구간합들을 구해놓은 벡터
	vector<vector<int>> row_sum(size + 1, vector<int>(size + 1, 0));
	vector<vector<int>> col_sum(size + 1, vector<int>(size + 1, 0));

	for (int y = 1; y <= size;y++) {
		for (int x = 1;x <= size;x++) {
			int input;
			cin >> input;
			
			row_sum[y][x] = row_sum[y][x-1] + input;
			col_sum[y][x] = col_sum[y-1][x] + input;
		}
	}

	while (chance--) {
		int y1, y2, x1, x2;
		cin >> y1 >> x1 >> y2 >> x2;

		int sector_sum = 0;

		for (int y = y1;y <= y2;y++) {
			sector_sum = sector_sum + (row_sum[y][x2] - row_sum[y][x1-1]);
		}

		cout << sector_sum << '\n';
	}
}