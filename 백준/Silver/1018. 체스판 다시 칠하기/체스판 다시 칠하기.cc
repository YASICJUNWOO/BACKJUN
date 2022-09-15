#include <iostream>
#include <string>
using namespace std;

int retouch(string* chess, int h, int w) {
	int cnt = 0;
	int cnt2 = 0;
	char check_char = 'B';
	char check_char2 = 'W';
	if (chess[h][w] == 'W') {
		check_char = 'W';
		check_char2 = 'B';
	}

	for (int j = h;j < h + 8;j += 2) {
			for (int i = w;i < w + 8;i += 2) {
				if (chess[j][i] != check_char) cnt++;
				if (chess[j + 1][i] != check_char2) cnt++;
				if (chess[j + 1][i + 1] != check_char) cnt++;
				if (chess[j][i + 1] != check_char2) cnt++;
			}
	}
	for (int j = h;j < h + 8;j += 2) {
		for (int i = w;i < w + 8;i += 2) {
			if (chess[j][i] != check_char2) cnt2++;
			if (chess[j + 1][i] != check_char) cnt2++;
			if (chess[j + 1][i + 1] != check_char2) cnt2++;
			if (chess[j][i + 1] != check_char) cnt2++;
		}
	}

	if (cnt > cnt2)
		return cnt2;
	else
		return cnt;
}

int main() {
	int height, width;
	int min=64;
	string str;
	cin >> height >> width;

	string* chess = new string[height]();

	for (int i = 0;i < height;i++) {
		cin >> chess[i];
	}

	int search_height = height - 8;
	int search_width = width - 8;

	for(int i=0;i<=search_height;i++){
		for (int j = 0;j <= search_width;j++) {
			int num = retouch(chess, i, j);
			if(num<min)
				min=num;
		}	
	}
	cout << min << '\n';
}

