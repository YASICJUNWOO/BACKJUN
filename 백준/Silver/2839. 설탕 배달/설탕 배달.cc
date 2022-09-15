#include <iostream>
using namespace std;

int main() {

	int kg; //배달해야하는 설탕 무게
	cin >> kg;

	int cnt = 0; //봉지의 수
	
	while (kg >= 0) {
		if (kg % 5 == 0) {
			cnt += kg / 5;
			kg = 0;
			break;
		}
		kg -= 3;
		cnt ++;
	}

	if (kg) {
		cout << -1;
	}
	else {
		cout << cnt;
	}
	
}