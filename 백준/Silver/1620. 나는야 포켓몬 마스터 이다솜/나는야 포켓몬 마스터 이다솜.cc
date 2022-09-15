#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map <int , string> poketmon;
	map <string, int> poketmon2;
	string name;
	string find;

	int test,test2;

	cin >> test>>test2;

	for (int i = 1;i <= test;i++) {
		cin >> name;
		poketmon.insert( {i, name });
		poketmon2.insert({ name, i });
	}

	while (test2--) {
		cin >> find;
		if (find[0] > 57 || find[0] < 48) {
			if (poketmon2.find(find) != poketmon2.end()) {
				cout << poketmon2.find(find)->second<<'\n';
			}
		}
		else
			cout<<poketmon.find(stoi(find))->second<<'\n';
	}
}