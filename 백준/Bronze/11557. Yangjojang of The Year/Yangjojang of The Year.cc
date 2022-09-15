#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int t, n;
	cin >> t;

	for (int i = 0;i<t;i++) {

		cin >> n;

		vector<pair<int,string>> school(n);

		for (int w = 0;w<n;w++) {
			cin >> school[w].second >> school[w].first;
		}

		sort(school.begin(), school.end());

		cout << school[n-1].second<<'\n';

	}
}