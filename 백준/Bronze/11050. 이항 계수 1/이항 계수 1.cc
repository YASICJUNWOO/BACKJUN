#include <iostream>
using namespace std;

int fac(int data) { //팩토리얼을 구하는 함수
	if (data == 0)  //수가 0이면 0!=1
		return 1;
	else {
		return data*fac(data - 1); //재귀함수에 -1한 값 호출
	}
}

int main() {
	int N, K;
	cin >> N >> K; 
	
	//이항계수는 조합과 같다
	cout << fac(N) / (fac(K) * fac(N - K));
}