#include <stdio.h>
int main(){
    int i,cnt=0;
    int num[10]={0};
    int f[10]={0};
    int rest1[42]={0};
    
    for(i=0;i<10;i++){
        scanf("%d\n",&num[i]);
        f[i]=num[i]%42;      //f[0]=1 f[1]=2
        
        for(int t=0;t<42;t++){
            if(f[i]==t){
                rest1[t]++;
               
            }
            
        }
    }
    
    for(int t=0;t<42;t++){
            if(rest1[t]!=0){
                cnt++;
               
                }
        
    }
 printf("%d",cnt);
}

    