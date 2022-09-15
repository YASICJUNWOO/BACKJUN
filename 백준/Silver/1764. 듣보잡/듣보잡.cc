#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<string> names;
	vector<string> db;

	for (int i = 0; i < n + m; i++) {
		string str;
		cin >> str;
		names.push_back(str);
	}

	sort(names.begin(), names.end());

	string check = " ";
	for (int i = 0; i < n + m; i++) {
		if (names[i] == check) {
			db.push_back(names[i]);
		}
		check = names[i];
	}

	cout<< db.size() << '\n';
	for (int i = 0; i < db.size(); i++) {
		cout << db[i]<<'\n';
	}
}