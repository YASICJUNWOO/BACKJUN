#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d\n",&A,&B);
    scanf("%d",&C);
   
    
    B=B+C;
    
    if(B>=60){
        A=A+(B/60);
        B=B%60;
        if(A>=24){
            printf("%d %d",A-24,B);
        }
        else{
         printf("%d %d",A,B);
        }
    }
    else if(B<60){
        printf("%d %d",A,B);
    }
}