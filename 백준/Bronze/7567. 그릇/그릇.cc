#include <iostream>
#include <string>
using namespace std;

int main() {
	string bo;
	int leng=10;
	
	cin>> bo;
	
	for(int i=0;i<bo.length()-1;i++){
	    if(bo[i]!=bo[i+1]) leng+=10;
	    else if(bo[i]==bo[i+1]) leng+=5;
	}
	
	cout<<leng;
	return 0;
}
