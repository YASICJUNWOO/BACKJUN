#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void cal(vector<int>);

int main() {
	int k;
	int n;
	cin >> k;

	for (int i = 1;i <= k ;i++) {
		cin >> n;
		vector<int> score(n);
		for (int t = 0;t < n;t++) {
			cin >> score[t];
		}
		cout << "Class " << i << endl;
		cal(score);
	}
}

void cal(vector<int> score) {
	int len = score.size();
	int max = 0;
	int gap;

	sort(score.begin(), score.end());

	for (int i = 0;i < len - 1;i++) {
		gap = score[i] - score[i + 1];
		gap = abs(gap);
		if (gap > max) max = gap;
	}
	cout << "Max " << score[len-1] << ", Min " << score[0] << ", Largest gap " << max <<endl;
}
