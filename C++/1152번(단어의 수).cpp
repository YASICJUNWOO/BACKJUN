#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int cnt = 0;
	string dan;
	getline(cin, dan);

	//����
	if (dan[0] == ' ' || dan[dan.length()-1] == ' ') {

		//���鸸 ���� ��
		if (dan.length() == 1) {
			cnt = -1;
		}

		//ó���� ������ ��
		else if (dan[0] == ' ' && dan.length()!= 1) {

			// ���� ������ ��
			if (dan[dan.length()-1] == ' ') {
				for (int i = 1;i < dan.length() - 1;i++) {
					if (dan[i] == ' ') { cnt++; }
				}
			}

			//ó���� ������ ��
			else {
				for (int i = 1;i < dan.length();i++) {
					if (dan[i] == ' ') { cnt++; }
				}
			}

		}

		//���� ������ ��
		else {
			for (int i = 0;i < dan.length() - 2;i++) {
				if (dan[i] == ' ') { cnt++; }
			}
		}
	}
	//�Ϲ� ���
	else {
		for (int i = 0;i < dan.length();i++) {
			if (dan[i] == ' ') { cnt++; }
		}
		
	}

	std::cout << cnt + 1;
}