#include <stdio.h>
int main(){
    int num;
    int sco[1000];
    

    
    scanf("%d",&num);   //케이스 수  받기
    
    for(int i=0;i<num;i++){
        double sum=0,avr=0;
        double histu=0; double hinum=0;
        int stu;
        scanf("%d",&stu);             //첫번째 칸에서 학생수 받기
        for(int t=0;t<stu;t++){             //베열에 저장하기
            scanf("%d ",&sco[t]);
            sum+=sco[t];
        }
        avr=sum/stu;              //평균구함
        
        for(int y=0;y<stu;y++){
        if(sco[y]>avr){
            hinum++;
        }
        
         
    }
    printf("%.3lf%%\n",hinum/stu*100);
    
    }
}