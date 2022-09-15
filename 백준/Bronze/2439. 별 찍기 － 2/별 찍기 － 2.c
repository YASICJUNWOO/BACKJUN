#include <stdio.h>
int main(){
    int n,i,t,k;
    scanf("%d",&n); //n이 5일때
    for(i=1;i<=n;i++){
        for(t=n-i;t>0;t--){
        printf(" ");
        }
        for(k=1;k<=i;k++){
        printf("*");
        }
        printf("\n");
    }
}