#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int length;
	cin >> length;


	int* array = new int[length];

	for (int i = 0; i< length;i++) {
		cin >> array[i];
	}

	sort(array, array+length);

	for (int i = 0; i < length;i++) {
		cout << array[i]<<"\n";
	}
}