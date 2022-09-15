#include <stdio.h>
int main(){
    int n;
    float max=-1.0, hap=0.0;
    scanf("%d",&n);
     float arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/max*100;
       hap=hap+arr[i];
    }
    printf("%f",hap/n);
}