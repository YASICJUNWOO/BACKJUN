#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int x, y;
	cin >> n;

	vector<pair<int, int>> point;

	for (int i = 0;i<n;i++) {
		cin >> x >> y;
		point.push_back({ x,y });
	}

	sort(point.begin(), point.end());

	for (int i = 0;i < n;i++) {
		cout << point[i].first <<" " << point[i].second << '\n';;
	}
}