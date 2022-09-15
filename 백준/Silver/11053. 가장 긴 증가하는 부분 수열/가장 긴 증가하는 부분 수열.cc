#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	//수열 저장할 벡터
	vector<int> list(n);

	//수열의 최대길이 저장할 벡터
	//초기 길이는 1
	vector<int> max(n,1);

	//수열 입력받기
	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		list[i] = input;
	}
	
	int max_length = 1;

	//index 1부터 최대길이 저장
	for (int i = 1; i < n; i++) {
		//자신의 전 index까지 탐색
		for (int j = i-1; j >= 0; j--) {
			//자신의 값보다 작고 최대길이가 자신보다 클 때 그 수의 +1을 저장
			if (list[j] < list[i] && max[i] <= max[j])
				max[i] = max[j]+1;
		}
		//max_length보다 길면 업데이트
		if (max[i] > max_length)
			max_length = max[i];
	}

	cout << max_length;
}