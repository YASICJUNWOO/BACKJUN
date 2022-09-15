#include <stdio.h>
#include <string.h>

int main(){
    int test;
   
   
   scanf("%d",&test);
   
   for(int i=0;i<test;i++){
       char s[80];
      int cnt=0,sum=0;
   scanf("%s",s);
   for(int i=0;i<strlen(s);i++){
       if(s[i]=='O'){
           cnt++;
           sum=sum+cnt;
       }
       else if(s[i]=='X'){
           cnt=0;
       }
       
   }
   printf("%d\n",sum);
}


}