#include <iostream>
#include<string>
using namespace std;

int main() {

	//테스트 케이스 수
	int t;
	cin >> t;

	//변환된 수 저장공간 생성
	double* tcase = new double[t];
	

	for (int i = 0;i < t;i++) {

		//맨 처음 숫자 초기화 하고 저장
		double num=0.0;
		cin >> num;

		//string 초기화
		string str="";

		getline(cin, str);

		for (int y = 0;y < str.length();y++) {

			switch (str[y]){

			case '@':
				num *= 3.0;
				break;

			case '#':
				num -= 7.0;
				break;

			case '%':
				num += 5.0;
				break;

			default:
				break;
			}

		}

		tcase[i] = num;
	}


	for (int i = 0;i < t;i++) {
		cout << fixed;
		cout.precision(2);
		cout << tcase[i]<<'\n';
	}
}