#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int lower_bound(vector<int> &card,int target , int low , int high) {
	while (low < high) {
		int mid = (low + high) / 2;

		if (target <= card[mid]) {
			high = mid;
		}
		else {
			low = mid + 1;
		}

	}
	return low;
}

int upper_bound(vector<int> &card,int target, int low, int high) {
	while (low < high) {
		int mid = (low + high) / 2;

		if (target >= card[mid]) {
			low = mid + 1;
		}
		else high = mid  ;

	}
	return low-1 ;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> card;

	int N, M;	
	cin >> N;

	int input;
	while (N--) {
		
		cin >> input;
		card.push_back(input);
	}

	sort(card.begin(), card.end());
	


	cin >> M;
	int size = card.size();
	while (M--) {
		cin >> input;
		
		int cnt = upper_bound(card,input, 0, size) - lower_bound(card,input,0, size)+1;
		cout << cnt << ' ';
	}

}