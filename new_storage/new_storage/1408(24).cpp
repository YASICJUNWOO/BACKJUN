﻿#include <iostream>
#include <string>
using namespace std;

int main() {

	//현재시각과 시작시간 문자열 선언 (시작시간=종료시간)
	string now, start;
	cin >> now >> start;

	//남은 시, 분, 초 선언
	int RestHour=0, RestMin=0, RestSec=0;
	
	//substr과 stoi 함수로 int 형으로 잘라주기;
	int NowHour = stoi(now.substr(0, 2));
	int NowMin = stoi(now.substr(3, 2));
	int NowSec = stoi(now.substr(6, 2));

	int Hour = stoi(start.substr(0, 2));
	int Min = stoi(start.substr(3, 2));
	int Sec = stoi(start.substr(6, 2));

	//종료시간이 현재시간보다 클 때
	if (Hour > NowHour) {
		RestSec = Sec - NowSec;
		RestMin = Min - NowMin;
		RestHour = Hour - NowHour;
	}

	//종료시간이 현재시간보다 작을 때
	else if (Hour < NowHour) {
		RestSec = Sec - NowSec;
		RestMin = Min - NowMin;

		//현재시간은 23시인데 종료시간은 1시이면 -값이 나오므로 24 더해주기
		RestHour = Hour+24 - NowHour; 
	}

	//종료시간이 현재시간과 같을때
	else {
		RestSec = 0;

		//종료 분이 현재분보다 작을 때
		if (Min < NowMin) {
			RestMin = Min - NowMin;
			RestSec = Sec - NowSec;
		}

		//종료 분이 현재분보다 클 때
		else if (Min < NowMin) {
			RestMin = Min + 60 - NowMin;
			RestSec = Sec - NowSec;
		}

		//종료 분이 현재분과 같을 때
		else {
			RestMin = 0;

			//종료 초가 현재초보다 작을 때
			if (Sec < NowSec) {
				RestSec = Sec - NowSec;
			}

			//종료 초가 현재초보다 클 때
			else if (Sec > NowSec) {
				RestSec = Sec - NowSec;
			}
		}
	}


	//음수값일때 보정해주기
	if (RestSec < 0) {
		RestSec += 60;
		RestMin--;
	}
	if (RestMin < 0) {
		RestMin += 60;
		RestHour--;
	}

	
	//2자리 맞춰서 출력해주기
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