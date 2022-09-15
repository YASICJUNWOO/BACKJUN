#include <iostream>
#include <string>
using namespace std;

int main() {

	int a=0, b=0;
	int v;

	string result;

	//심사위원 수와 투표결과 입력받기
	cin >> v >> result;

	for (int i = 0;i < result. length();i++) {
		if (result[i] == 'A') a++;
		else b++;
	}

	if (a > b) cout << 'A';
	else if (a < b) cout << 'B';
	else cout << "Tie";
}