#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

struct info{
	int year;
	string name;
	int n;

	info(int n,int y, string str) :n(n), year(y), name(str) {}
};

struct cmp {
	bool operator()(info x, info y) {
		if (x.year == y.year)
			return x.n > y.n;
		else
			return x.year > y.year;
	}
};

int main() {

	int test;
	cin >> test;
	int n = 0;

	priority_queue<info, vector<info>, cmp> q;

	while (test--) {
		int num;
		string str1;
		cin >> num >> str1;
		q.push(info(n,num, str1));
		n++;
	}

	while (!q.empty()) {
		info i = q.top();
		cout << i.year << ' ' << i.name<<'\n';
		q.pop();
	}
}