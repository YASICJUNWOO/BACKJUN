#include <stdio.h>
int main(){
    int H, M ,CH ,CM;
    scanf("%d %d",&H,&M);
    CM = M-45;
    
    if(CM>=0){
        printf("%d %d",H,CM);
    }
    
    else if(CM<0){
        CH= H-1;
        CM= CM+60;
        if(CH>=0){printf("%d %d",CH,CM);}
        else if(CH<0){printf("23 %d",CM);}       
    }
    return 0;
}