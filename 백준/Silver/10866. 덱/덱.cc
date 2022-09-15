#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;

	deque<int> dq;

	string str;

	while (test--) {
		cin >> str;

		int input;

		if (str == "push_front") {
			cin >> input;
			dq.push_front(input);
		}
		else if (str == "push_back") {
			cin >> input;
			dq.push_back(input);
		}
		else if (str == "pop_front") {
			if (dq.empty())
				cout << -1<<'\n';
			else {
				cout << dq.front()<<'\n';
				dq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (dq.empty())
				cout << -1 << '\n';
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (str == "size") {
			cout << dq.size() << '\n';
		}
		else if (str == "empty") {
			cout<<dq.empty() << '\n';
		}
		else if (str == "front") {
			if (dq.empty())
				cout << -1 << '\n';
			else 
			cout << dq.front() << '\n';
		}
		else if (str == "back") {
			if (dq.empty())
				cout << -1 << '\n';
			else
			cout<<dq.back() << '\n';
		}
	}
}