#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

queue<pair<int, int>> q;

int delt_idx(int p) {

    while (q.front().first != p) {
        q.push(q.front());
        q.pop();
    }

    return q.front().second;
}

int main() {
    int test;
    cin >> test;

   

    int total, index;
    int rank;
    while (test--) {
        vector<int> rank_list;
        int cnt = 1;
        cin >> total >> index;

        for (int i = 0;i < total;i++) {
            cin >> rank;
            rank_list.push_back(rank);
            q.push(pair<int, int>(rank, i));
        }

        sort(rank_list.begin(), rank_list.end(), greater<int>());

        for (int i = 0;i < rank_list.size();i++) {
            int idx = delt_idx(rank_list[i]);

           

            if (idx == index) {
                cout << cnt<<'\n';
                break;
            }

            q.pop();
            cnt++;
        }
        q = queue<pair<int, int>>();
    }

}