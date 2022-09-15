#include <stdio.h>

int fact(int k);
int main(){
    int n,cnt=1;
    scanf("%d",&n);
  if(n==0){printf("1");}
  else printf("%d",fact(n));
}

int fact(int k){
    if(k>1){
    return k*fact(k-1);
    }
    else if(k==1) return 1;
    
    
}