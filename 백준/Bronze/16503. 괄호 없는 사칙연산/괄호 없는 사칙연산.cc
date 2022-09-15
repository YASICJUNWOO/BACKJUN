#include <iostream>
using namespace std;

int cal(int n, int m, char c) {
	if (c == '+')
		return n + m;
	else if (c == '-')
		return n - m;
	else if(c=='/')
		return n / m;
	else
		return n * m;
}
int main() {
	int n1, n2, n3;
	char c1, c2;
	cin >> n1 >> c1 >> n2 >> c2 >> n3;

	// result1 = 순서없는 결과
	int result1, result2;

	result1 = cal(cal(n1, n2, c1), n3, c2);
	result2 = cal(n1, cal(n2, n3, c2), c1);

	if (result1 > result2)
		cout << result2 << '\n' << result1;
	else
		cout << result1 << '\n' << result2;
}