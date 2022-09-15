#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<int> Q;
	int test;
	int num;
	string what;

	cin >> test;

	for (int i = 0;i<test;i++) {
		cin >> what;
		if (what == "push") {
			cin >> num;
			Q.push(num);
		}
		else if (what == "pop") {
			if (Q.empty()) cout << "-1\n";
			else if (!Q.empty()) {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (what == "size") cout << Q.size()<<'\n';
		else if (what == "empty"){
			if (Q.empty()) cout << "1\n";
			else if (!Q.empty()) cout << "0\n";
		}
		else if (what == "front") {
			if (Q.empty()) cout << "-1\n";
			else if (!Q.empty()) cout << Q.front() << '\n';
		}
		else if (what == "back") {
			if (Q.empty()) cout << "-1\n";
			else if (!Q.empty()) cout << Q.back() << '\n';
		}
	}
}