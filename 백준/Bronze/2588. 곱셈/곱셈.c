#include<stdio.h>
int main(){
    int fir, sec,n3,n4,n5,sum;
    scanf("%d",&fir);
    scanf("%d",&sec);
    
    n3=fir*(sec%10);
    n4=fir*((sec/10)%10);
    n5=fir*(sec/100);
    sum=n3+(n4*10)+(n5*100);
    
    printf("%d\n%d\n%d\n%d",n3,n4,n5,sum);
 
}