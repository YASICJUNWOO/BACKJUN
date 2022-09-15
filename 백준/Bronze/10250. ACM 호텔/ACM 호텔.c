#include <stdio.h>
int main(){
    int h,w,n,t;
    scanf("%d\n",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&h,&w,&n);
        if(n<=h*w&&1<=n&&1<=h&&1<=w&&99>=h&&99>=w){
        if(n<=h){
            printf("%d01\n",n);
        }
        else if(n>h){
            if(n%h==0){
            printf("%d%02d\n",h,n/h);}
            else {printf("%d%02d\n",n%h,n/h+1);}
        }
        }
    }
}