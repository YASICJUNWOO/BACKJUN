#include <iostream>
#include <string>
using namespace std;

int main() {
	string now, start;

	cin >> now >> start;

	int RestHour=0, RestMin=0, RestSec=0;

	int NowHour = stoi(now.substr(0, 2));
	int NowMin = stoi(now.substr(3, 2));
	int NowSec = stoi(now.substr(6, 2));

	int Hour = stoi(start.substr(0, 2));
	int Min = stoi(start.substr(3, 2));
	int Sec = stoi(start.substr(6, 2));

	if (Hour > NowHour) {
		RestSec = Sec - NowSec;
		RestMin = Min - NowMin;
		RestHour = Hour - NowHour;
	}
	else if (Hour < NowHour) {
		RestSec = Sec - NowSec;
		RestMin = Min - NowMin;
		RestHour = Hour+24 - NowHour;
	}
	else {
		RestSec = 0;
		if (Min < NowMin) {
			RestMin = Min - NowMin;
			RestSec = Sec - NowSec;
		}
		else if (Min < NowMin) {
			RestMin = Min + 60 - NowMin;
			RestSec = Sec - NowSec;
		}
		else {
			RestMin = 0;
			if (Sec < NowSec) {
				RestSec = Sec - NowSec;
			}
			else if (Sec > NowSec) {
				RestSec = Sec - NowSec;
			}
		}
	}

	if (RestSec < 0) {
		RestSec += 60;
		RestMin--;
	}
	if (RestMin < 0) {
		RestMin += 60;
		RestHour--;
	}

	
	cout.width(2); 
	cout.fill('0');
	cout << RestHour << ":";
	cout.width(2);
	cout.fill('0');
	cout << RestMin << ":";
	cout.width(2);
	cout.fill('0');
	cout << RestSec;
}