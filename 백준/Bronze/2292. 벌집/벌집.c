#include <stdio.h>
int main(){
    int n,range=1,cnt=1;
    scanf("%d",&n);
    while(n>range){
        range=range+(cnt*6);
        cnt++;
        
    }
    printf("%d",cnt);
}