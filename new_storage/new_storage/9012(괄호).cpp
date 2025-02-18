﻿#include <iostream>
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

		int Lcnt = 0; // ')'문자의 개수
		bool check = 1; //

		while (!st.empty()) {
			if (st.top() == '(') { //'('나왔을 때
				if (Lcnt) { // 전에 ')'문자가 나왔었다면 pop하고 Lcnt감소
					st.pop();
					Lcnt--;
				}
				else { //전에 ')'문자가 안나왔으면 check 0으로 바꾸고 탈출
					check = 0;
					break;
				}
			}
			else if (st.top() == ')') { // ')'나왔을 떄 Lcnt 증가
				st.pop();
				Lcnt++;

			}

		}

		if (st.empty() && check && Lcnt == 0) cout << "YES\n"; //스택에 남은게 없고 check 1이고 Lcnt남은 게 없을때 YES
		else if (!st.empty() || Lcnt || !check) { //아닐 시 NO
			cout << "NO\n";
		}
	}
}