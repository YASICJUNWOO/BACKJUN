#include <stdio.h>
int main(){
    int A,B,T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d\n",&A,&B);
        printf("%d\n",A+B);
    }
}