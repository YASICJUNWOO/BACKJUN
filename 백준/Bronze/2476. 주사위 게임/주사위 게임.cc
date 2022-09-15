#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int t;

	cin >> t;

	int d1, d2, d3;
	int* price = new int[t]();

	for (int i = 0;i < t;i++) {

		cin >> d1 >> d2 >> d3;

		if(d1==d2&&d2==d3) price[i] = 10000 + d1 * 1000;
		else if (d1 == d2) price[i] = 1000 + d1 * 100;
		else if (d2 == d3) price[i] = 1000 + d2 * 100;
		else if (d1 == d3)  price[i] = 1000 + d1 * 100;

		if (d1 != d2 && d2 != d3 && d3 != d1) {
			int dim[3] = { d1,d2,d3 };
			sort(dim, dim + 3);
			price[i] = dim[2] * 100;
		}
	}

	sort(price, price + t);
	cout << price[t - 1];
}