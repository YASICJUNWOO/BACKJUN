#include <iostream>
#include <vector>
using namespace std;

int map[130][130];
int cnt[2]{0,};

void check(int y, int x, int length) {
	if (length == 1) {
		cnt[map[y][x]]++;
		return;
	}
	vector<pair<int, int>> point;
	int check_num = map[y][x];
	bool is_same = true;
	for (int i = y; i < y+length; i++) {
		for (int j = x; j < x+length; j++) {
			if (check_num != map[i][j]) {
				is_same = false;
				break;
			}
		}
		if (!is_same)
			break;
	}

	if (is_same) {
		cnt[check_num]++;
		return;
	}
	else if(!is_same) {
	check(y, x, length / 2);
	check(y + length / 2, x + length / 2, length / 2);
	check(y + length / 2, x, length / 2);
	check(y, x + length / 2, length / 2);
		}
}

int main() {
	int n;
	cin >> n;

	int input;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> input;
			map[i][j] = input;
		}
	}
	
	check(0, 0, n);

	cout << cnt[0] << '\n' << cnt[1];
}