#include <iostream>
using namespace std;

int main(){
    int date;
    int cnt=0;
    int car =5;
    int carNum;
    cin>>date;
    while(car--){
        cin>>carNum;
        if(date==carNum)
            cnt++;
        }
    cout<<cnt;
}