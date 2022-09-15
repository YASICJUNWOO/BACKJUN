#include <iostream>
#include<string>
using namespace std;

int main() {

	int n;

	cin >> n;

	string *name=new string[n];
	int* d = new int[n];
	int* m = new int[n];
	int* y = new int[n];

	for (int i = 0;i < n;i++) {
		cin >> name[i] >> d[i] >> m[i] >> y[i];
	}
	/*for (int i = 0;i < n;i++) {
		cout << name[i] << d[i] << m[i] << y[i]<<endl;
	}*/


	//나이 많은 사람 구하기
	int max = y[0];
	int MaxIndex = 0;

	for (int i = 1;i < n;i++) {
		if (max > y[i]) {
			max = y[i];
			MaxIndex = i;
		}
		else if (max == y[i]) {
			if (m[MaxIndex] > m[i])  MaxIndex = i;
			else if (m[MaxIndex] == m[i]) {
				if(d[MaxIndex]>d[i]) MaxIndex = i;
			}
		}
	}

	int min = y[0];
	int MinIndex = 0;

	for (int i = 1;i < n;i++) {
		if (min < y[i]) {
			min = y[i];
			MinIndex = i;
		}
		else if (min == y[i]) {
			if (m[MinIndex] < m[i])  MinIndex = i;
			else if (m[MinIndex] == m[i]) {
				if (d[MinIndex] < d[i]) MinIndex = i;
			}
		}
	}

	cout  << name[MinIndex] << '\n' << name[MaxIndex];
}