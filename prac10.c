#include<stdio.h>

int main(){
	int n;
	printf("enter year : ");
	scanf("%d",&n);
	if(n<=0){
		printf("\nerror");
	}
	else{
		if((n%4==0) || (n%400==0) && (n%100!=0)){
			printf("\n%d is a leap year",n);
		}
		else{
			printf("\n%d is not a leap year",n);
		}
	}
	return 0;
}