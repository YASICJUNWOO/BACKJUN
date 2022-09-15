#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//n = 3
	int n;
	cin >> n;
	int r, c;
	cin >> r >> c;

	//목표 숫자
	int target_num = 0;

	int plus_num;

	int start_width = 0;
	int start_height = 0;
	int end_width = pow(2, n) - 1; //7
	int end_height = end_width; //7

	for (int i = n; i > 1; i--) {

		int width_length = end_width - start_width; //7
		int width_height = end_height - start_height; //7

		int check_width = width_length / 2 + start_width; //3
		int check_height = width_height / 2 + start_height; //3


		if (c > check_width) {
			start_width = check_width + 1; //4
			if (r > check_height) {
				start_height = check_height + 1; //4
				plus_num = 3;
			}
			else {
				end_height = check_height; //3
				plus_num = 1;
			}
		}
		else {
			end_width = check_width; //3
			if (r > check_height) {
				start_height = check_height + 1; //4
				plus_num = 2;
			}
			else {
				end_height = check_height; //3
				plus_num = 0;
			}
		}

		target_num += plus_num * pow(4, i - 1);
	}

	if (c - start_width == 1) {
		target_num++;
		if (r - start_height == 1) {
			target_num += 2;
		}
	}
	else if (r - start_height == 1) {
		target_num+=2;
	}

	cout << target_num;
}