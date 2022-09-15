#include <stdio.h>
int main(){
int test;
    scanf("%d",&test);
    if(test<=100 && test>=90){
        printf("A");
    }
    else if(test<=89 && test>=80){
        printf("B");       
    }
    else if(test<=79 && test>=70){
        printf("C");       
    }
     else if(test<=69 && test>=60){
        printf("D");       
    }
    else{
        printf("F");
    }
    

    return 0;
}