﻿#include <iostream>
using namespace std;

//유클리드 호제법을 이용한 최대 공약수 구하기
int gcd(int n1, int n2) {
	int mod_result = n1%n2;
	while (mod_result !=0 ) {
		n1 = n2;
		n2 = mod_result;
		mod_result = n1 % n2;
	}
	return n2;
}

int main() {

	int num1, num2;
	cin >> num1 >> num2;

	//두 수의 최대공약수를 구함
	int gcd_result = gcd(num1, num2);

	//최소공배수는 두수를 곱한값에 최대공약수를 나누면 된다
	cout << gcd_result << '\n' << num1 * num2 / gcd_result;
}