#include<stdio.h>

int main(){
	float l,b,A,P;
    printf("enter the length of the rectangle/n");
	scanf("%f",&l);
	printf("enter the breath of the rectangle/n");
	scanf("%f",&b);
        A=l*b;
	    P=2*(l+b);
	    printf("the area of the rectangle is %f/n",A);
	    printf("the perimeter of the rectangle is %f/n",P);
	return 0;
}