#include <stdio.h>
int main(){
    int i,max=0,max_num;
    int arr[9];
    for(i=0;i<9;i++){
        scanf("%d\n",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
            max_num=i+1;
        }
    }
    printf("%d\n%d",max,max_num);
}