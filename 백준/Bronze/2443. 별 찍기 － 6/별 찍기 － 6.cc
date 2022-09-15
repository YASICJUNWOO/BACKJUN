#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = n;i>0;i--) {
		for (int s = n;s>i;s--)cout << " ";
		for (int t = i*2-1;t>0;t--)cout << '*';
		if(i!=1)cout << endl;
	}
}