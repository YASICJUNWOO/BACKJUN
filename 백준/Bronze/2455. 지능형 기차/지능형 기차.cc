#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int people[4]{0,};

	int down, up;
	cin >> down >> up;
	people[0] = up;

	for (int i = 1;i < 4;i++) {
		cin >> down >> up;
		people[i] = people[i - 1] - down + up;
	}

	sort(people, people + 4);
	cout << people[3];
}