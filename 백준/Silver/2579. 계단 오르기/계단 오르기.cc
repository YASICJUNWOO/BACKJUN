#include <iostream>
#include <vector>
using namespace std;

int stair[302];
int score[302];

int main() {
	int q;
	cin >> q;

	int input;

	for (int i = 1; i <= q; i++) {
		cin >> input;
		stair[i] = input;
	}
	score[0] = 0;
	score[1] = stair[1];
	score[2] = stair[1] + stair[2];

	for (int i = 3; i <= q; i++) {
		score[i] = max(score[i - 3] + stair[i - 1] + stair[i],
			score[i - 2] + stair[i]);
	}

	cout << score[q];

}