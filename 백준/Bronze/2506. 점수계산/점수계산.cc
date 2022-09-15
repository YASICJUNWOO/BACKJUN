#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int TotalScore=0;
	cin >> n;

	int score = 1;

	vector<int> check(n);

	for (int i = 0;i<n;i++) {
		cin>>check[i];
	}

	for (int i = 0;i<n;i++) {
		if (check[i] == 1) {
			if (i == 0) {
				TotalScore++;
				continue;
			}

			if(check[i-1]==1) {
				score++;
				TotalScore += score;
			}
			else if(check[i-1] != 1){
				TotalScore += score;
			}
		}
		else if (check[i] == 0) {
			score = 1;
		}
	}

	cout << TotalScore;

}