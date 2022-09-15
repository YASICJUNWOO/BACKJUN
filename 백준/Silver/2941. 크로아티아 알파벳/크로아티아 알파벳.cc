#include <iostream>
#include <string>
using namespace std;

int main() {
	string vo;
	int cnt = 0;

	
	cin >> vo;

	for (int i = 0;i < vo.length();i++) {
		
		if(vo[i]=='='|| vo[i] == '-') {
			if (vo[i - 1] == 'z' && vo[i - 2] == 'd') {
				cnt = cnt - 2;
			}else cnt = cnt - 1;
		}
		else if (vo[i] == 'j') {
			if (vo[i - 1] == 'l' || vo[i - 1] == 'n') {
				cnt = cnt - 1;
			}
		}
		cnt++;
	}

	cout << cnt;
}