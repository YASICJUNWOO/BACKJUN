#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	
	vector<string> v; //단어 리스트 저장할 벡터
	vector<int> size; //단어들의 길이 저장할 벡터
	for(int i=0;i<test;i++){
		string str; //단어 저장할 변수
		cin >> str; //문자 입력받음
		v.push_back(str); //단어 저장
		size.push_back(str.size()); //단어의 길이 저장
	}

	sort(size.begin(), size.end()); //단어의 길이 오름차순 정렬
	size.erase(unique(size.begin(), size.end()), size.end()); //단어의 길이 중복 제거
	sort(v.begin(), v.end()); //알파벳 순으로 정렬
	v.erase(unique(v.begin(), v.end()), v.end()); //중복 제거
	
	for (int len : size) { //길이 작은 것부터
		for (int i = 0;i < v.size();i++) {  //모든 단어 탐색
			if (v[i].size() == len) {  //길이가 같으면 출력하고 제거
				cout << v[i] << '\n';
			}
		}
	}
	
}