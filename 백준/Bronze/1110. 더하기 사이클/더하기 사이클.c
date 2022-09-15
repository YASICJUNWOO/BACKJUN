#include <stdio.h>
int main(){
   int n,k,cnt=0,n1,n2,sum,y=-1;
   scanf("%d",&n); //n=1
   k=n;
   while(y!=n){
   n1=(k%10);   //n=0
   n2=(k/10);   //n=1
   
   sum=n1+n2;     //sum=1
   
   k=(n1*10)+(sum%10);     //k=
   y=k;
   cnt++;
       
   }
   printf("%d",cnt);
   return 0;
}