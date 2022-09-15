#include <stdio.h>
int main(){
   int a,b,c,num,m[10]={0, },t;
   scanf("%d %d %d",&a,&b,&c);
   num=a*b*c;

   
   while(num>0){
       t=num%10;
       m[t]++;
       num=num/10;
   }

     for(int y=0;y<=9;y++){
    printf("%d\n",m[y]);
         
     }

}