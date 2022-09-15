#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string str;
	int test;

	cin >> test;

	while (test--) {
		stack<char> st;
		cin >> str;
		for (int i = 0; i < str.size();i++) { //stack에 문자 저장
			st.push(str[i]);
		}

		int Lcnt = 0;
		bool check = 1;

		while (!st.empty()) {
			if (st.top() == '(') {
				if (Lcnt) {
					st.pop();
					Lcnt--;
				}
				else {
					check = 0;
					break;
				}
			}
			else if (st.top() == ')') {
				st.pop();
				Lcnt++;

			}

		}

		if (st.empty()&&check&&Lcnt==0) cout << "YES\n";
		else if (!st.empty() || Lcnt||!check) {
			cout << "NO\n";
		}
	}
}