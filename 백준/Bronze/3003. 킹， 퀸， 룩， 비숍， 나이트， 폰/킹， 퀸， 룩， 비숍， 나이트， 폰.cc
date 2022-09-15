#include <iostream>
using namespace std;

int main() {

	//각 말의 원래 있어야 할 개수
	int chess[6]{1,1,2,2,2,8};

	//현개 가지고 있는 말의 수 빼고 출력
	int input;
	for (int i = 0;i < 6;i++) {
		cin >> input;
		chess[i] -= input;
		cout << chess[i] << ' ';
	}
}