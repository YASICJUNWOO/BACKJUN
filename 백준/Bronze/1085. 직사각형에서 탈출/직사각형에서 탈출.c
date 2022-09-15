#include <stdio.h>
int main(){
    int x,y,w,h,himi,wimi,re;
    
    scanf("%d %d %d %d",&x,&y,&w,&h);
     himi=h-y;
    wimi=w-x;
    
    int min[4]={x,y,himi,wimi};
    re=x;
   
for(int i=0;i<4;i++){
    if(min[i]<re){
        re=min[i];
    }
}
printf("%d",re);
}