#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5,t,p;
	printf("\n Enter marks of 5 subjects each out of 100 : ");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
    printf("\n Total marks = %d/500",t);

    p=t/5;
    printf("\n\n Percentage = %d",p);

    if(p>80 && p<=100){
        printf("\n\n Your Grade : A+");
	}
    else if(p>=75){
        printf("\n\n Your Grade : A");
	}
    else if(p>=60){
        printf("\n\n Your Grade : B");
    }
    else if(p>=45){
        printf("\n\n Your Grade : C");
    }
	else if(p>=35){
        printf("\n\n Your grade : D");
	}
    else if(p<35 && p>=0){
        printf("\n\n You Are Fail");
	}
    else{
        printf("\n\n Error");
    }
	return 0;
}