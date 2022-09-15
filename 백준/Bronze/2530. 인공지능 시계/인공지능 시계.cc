#include <iostream>
using namespace std;

int main() {

	int Hour, Min, Sec;

	int time;

	cin >> Hour >> Min >> Sec;

	cin >> time;

	Min+=time / 60;
	Sec += time % 60;
	
	while(Sec>=60){
		Sec -= 60;
		Min++;
	}

	while (Min >= 60) {
		Min -= 60;
		Hour++;
	}

	while (Hour >= 24) {
		Hour -= 24;
	}

	printf("%d %d %d", Hour, Min, Sec);
}