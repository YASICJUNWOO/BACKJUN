#include <stdio.h>
int main(){
    int n,i,t;
    int min=1000000;
    int max= -1000000;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&t);
        arr[i]=t;
    }
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
}