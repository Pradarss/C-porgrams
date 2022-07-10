#include<stdio.h>

int main(){
	int n,i,m;
	printf("enter number to check : ");
	scanf("%d",&n);
	if(n<=0){
		printf("error");
	}
	else{
		if(n%2==0){
			printf("\n%d is an even number",n);
		}
		else{
			printf("\n%d is an odd number",n);
		}
	}
	return 0;
}