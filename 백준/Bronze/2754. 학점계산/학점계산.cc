#include <iostream>
using namespace std;

int main() {

	char grade[2];
	double score=0;

	for (int i = 0;i < 2;i++) {
		cin >> grade[i];
	}


	switch (grade[0]) {
	case 'A':
		switch (grade[1]) {
		case '+': score = 4.3; break;
		case '0': score = 4.0; break;
		case '-': score = 3.7; break;
		}
		break;
	case 'B':
		switch (grade[1]) {
		case '+':score = 3.3; break;
		case '0':score = 3.0; break;
		case '-':score = 2.7; break;
		}
		break;
	case 'C':
		switch (grade[1]) {
		case '+':score = 2.3; break;
		case '0':score = 2.0; break;
		case '-':score = 1.7; break;
		}
		break;
	case 'D':
		switch (grade[1]) {
		case '+':score = 1.3; break;
		case '0':score = 1.0; break;
		case '-':score = 0.7; break;
		}
		break;
	case 'F':
		score = 0.0; break;
	}

	cout << fixed;
	cout.precision(1);

	cout << score;
}