#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long long hashNum = 0;

    //알파벳 길이수
    int len;
    cin >> len;

    //문장 받음
    string str;
    cin >> str;

    //각 문자에 해당하는 수열 저장
    vector<int> nums;

    for (int i = 0;i < len; i++) {
        nums.push_back(str[i] - 'a' + 1);
    }

    //r값에 맞는 거듭제곱 값 저장할 배열
    long long R = 1;
    for(int i=0;i<len;i++){
        hashNum = hashNum + (nums[i] * R) % 1234567891;
        hashNum %= 1234567891;
        R = R * 31;
        R %= 1234567891;

    }

    cout << hashNum%1234567891;
}