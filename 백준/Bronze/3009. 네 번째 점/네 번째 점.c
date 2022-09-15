#include <stdio.h>
int main(){
    int h[3],w[3];
    int x,y;

    
    for(int i=0;i<3;i++){
    scanf("%d %d\n",&w[i],&h[i]);
    }
    
    if(w[0]==w[1]){x=w[2];}
    else if(w[2]==w[1]){x=w[0];}
    else x=w[1];
    
    if(h[0]==h[1]){y=h[2];}
    else if(h[2]==h[1]){y=h[0];}
    else y=h[1];
    
    printf("%d %d",x,y);
}