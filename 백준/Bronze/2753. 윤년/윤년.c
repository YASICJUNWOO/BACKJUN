#include <stdio.h>
int main(){
    int year, cal1, cal2, cal3;
    scanf("%d",&year);
    cal1 = year%4;
    cal2 = year%100;
    cal3 = year%400;
    if((cal1 == 0 && cal2 != 0) || (cal3 == 0)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0 ;
}
   