#include <stdio.h>
int main() {
	int n,sum=0;
	scanf("%d\n",&n);
	char num[100];
	
	for(int i=0;i<n;i++){
	
	scanf("%c",&num[i]);
		
	
}

	for (int i = 0;i < n;i++) {
	    sum+=num[i]-48;
	
	}
printf("%d\n",sum);
	
}