#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int t = n;t>0;t--) {
		for (int i = t;i > 0;i--) {
			cout << '*';
		}
		if(t>1) cout << endl;
	}
		
	
}