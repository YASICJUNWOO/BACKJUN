#include <iostream>
using namespace std;

int R[1002]{ 0, };
int G[1002]{ 0, };
int B[1002]{ 0, };

int main(){
	int n;
	cin >> n;

	//데이터 저장
	int input1, input2, input3;
	for (int i = 0; i < n; i++) 
		cin >> R[i] >> G[i] >> B[i];

	//각 순서에서 R or G or B 골랐을 때 최소비용 구하기
	for (int i = 1; i < n; i++) {
		R[i] += min(G[i-1], B[i-1]);
		G[i] += min(R[i-1], B[i-1]);
		B[i] += min(G[i-1], R[i-1]);
	}

	cout << min(min(R[n - 1], G[n - 1]), B[n - 1]);
}