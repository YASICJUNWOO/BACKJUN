#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	string str;
	stack<int> st;
	cin >> n;

	for (int i = 0;i < n;i++) {
		int num;
		cin >> str;

		if (str == "push") {
			cin >> num;
			st.push(num);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << '\n';
				st.pop();
			}
			else if (st.empty()) {
				cout << "-1" << '\n';
			}
		}
		else if (str == "size") {
			cout << st.size() << '\n';
		}
		else if (str == "empty") {
			cout << st.empty() << '\n';
		}
		else if (str == "top") {
			if (!st.empty()) {
				cout << st.top() << '\n';
			}
			else if (st.empty()) {
				cout << "-1"<<'\n';
			}
		}
			
	}
}