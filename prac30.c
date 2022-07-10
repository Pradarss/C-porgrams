#include<stdio.h>
void main(){
    int a,b;
    int c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("\n1. +\n2. -\n3. *\n4. /\n5. %%\n");
    printf("Enter choice : ");
    scanf("%d",&c);
    switch (c){
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",(a*b));
        break;
        case 4:
        printf("%f",(float)a/(float)b);
        break;
        case 5:
        printf("%d",a%b);
        break;

    }
}