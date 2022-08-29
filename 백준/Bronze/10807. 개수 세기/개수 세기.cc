#include <iostream>
using namespace std;

int main() {
    int list[204]{ 0, };
    int test;
    cin >> test;

    int input;
    for (int i = 0;i < test;i++) {
        cin >> input;
        if (input < 0) {
            input += 201;
        }
        list[input]++;
    }

    cin >> input;
    if (input < 0) {
        input += 201;
    }
    cout << list[input];
}