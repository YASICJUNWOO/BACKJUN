#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string dan;
	int al[26] = { 0, };


	cin >> dan;
	//al에 나온횟수 저장
	for (int i = 0;i < dan.length();i++) {
		if (dan[i] >= 65 && dan[i] <= 90) {
			al[dan[i] - 65]++;
		}
		else if (dan[i] >= 97 && dan[i] <= 122) {
			al[dan[i] - 97]++;
		}
	}

	int max = 0;
	int  m = 0;
	int cnt = 0;



	for (int i = 0;i < 26;i++) {
		if (max > al[i]) {
			continue;
		}
		else if (max < al[i]) {
			max = al[i];
			m = i;
		}
	}
	for (int i = 0;i < 26;i++) {
		if (al[i] == max) {
			cnt = cnt + 1;
		}
	}


	if (cnt > 1) {
		cout << "?";
	}
	else if (cnt == 1) {
		cout << (char)(m + 65);
	}
	
}