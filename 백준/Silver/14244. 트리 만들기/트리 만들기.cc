#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int vec=1;
	int index = 2;
	int vecNode = 1;

	int leafNode = m - 1;
	int restNode = n - m;
	if (restNode) {
		vec++;
		restNode--;
	}
	else{}


	while(restNode>0) {
		vec++;
		restNode -= leafNode;
	}

	cout << "0 " << "1" << endl;
	
	if(vec>1) {
		for (int i = 0;i<leafNode;i++) {
			cout << vecNode << " ";
			cout << index << endl;
			index++;
		}
		vec--;
		vecNode += leafNode;
	}

	while (vecNode<n-1) {
		cout << vecNode << " ";
		cout << vecNode+1;
		if (vecNode != n-2) cout << endl;
		vecNode++;
	}
}