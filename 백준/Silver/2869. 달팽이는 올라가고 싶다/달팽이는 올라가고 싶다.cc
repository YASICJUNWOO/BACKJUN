#include <iostream>
using namespace std;

int main() {
	long long a, b, v;
	cin >> a >> b >> v;

	long long day = 0;

	//v / (a - b);

	cout << (v - b - 1) / (a - b) + 1;
}