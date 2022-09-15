#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);

	cin.tie(0);

	string str;
	cin >> str;

	int temp = 1;
	long long result = 0;

	stack<char> stack;
	int len = str.length();

	for (int i = 0;i < len;i++) {

		if (str[i] == '(') {
			temp *= 2;
			stack.push(str[i]);
		}
		else if (str[i] == '[') {
			temp *= 3;
			stack.push(str[i]);
		}
		else if (str[i] == ']') {
			if ((!stack.empty() && stack.top() != '[') || stack.empty()) {
				result = 0;
				break;
			}
			else {
				if (str[i - 1] == '[') {
					result += temp;
				}
				temp /= 3;
				stack.pop();
			}
		}
		else if (str[i] == ')') {
			if ((!stack.empty()&&stack.top() != '(') || stack.empty()) {
				result = 0;
				break;
			}
			else {
				if(str[i-1]=='('){
					result += temp;
				}
				temp /= 2;
				stack.pop();
				
			}
		}
	}
	if (!stack.empty()) {
		cout << "0\n";
	}
	else {
		cout << result<<'\n';
	}
	return 0;
 }