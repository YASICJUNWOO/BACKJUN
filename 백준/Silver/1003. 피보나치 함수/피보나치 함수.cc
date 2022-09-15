#include <iostream>
using namespace std;

//0과 1의 출력횟수
int arr0[41]{1, };
int arr1[41]{0, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    arr0[1] = 0;
    arr1[1] = 1;

    for (int i = 2;i <= 40;i++) {
        arr0[i] = arr0[i - 2] + arr0[i - 1];
        arr1[i] = arr1[i - 2] + arr1[i - 1];
    }

    int test;
    cin >> test;

    while (test--) {

        //수 입력받고 각 인덱스 값 출력
        int input;
        cin >> input;

        cout << arr0[input] << ' ' << arr1[input] << '\n';

    }
}