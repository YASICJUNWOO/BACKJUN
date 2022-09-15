#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int people[20];

	int train[11]={0, }, y = 1;

	for (int i = 0;i < 19;i++) {
		cin >> people[i];
	}

	for (int i = 0;i<=18;i += 2) {
		train[y] = train[y-1] - people[i] + people[i + 1];
		y++;
	}
	sort(train, train + 11);

	cout << train[10];
}