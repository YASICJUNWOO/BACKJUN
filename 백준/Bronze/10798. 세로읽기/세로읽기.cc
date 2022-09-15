#include <string>
#include <iostream>

using namespace std;

int main() {
    int max = 0;
    string* str = new string[5];
    for (int i = 0; i < 5; i++) {
        string sstr;
        cin >> sstr;
        str[i] = sstr;
        if (max < str[i].length()) {
            max = str[i].length();
        }
    }
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[j][i] == NULL)
                continue;
            else cout << str[j][i];
        }
    }

    delete[] str;
    return 0;
}