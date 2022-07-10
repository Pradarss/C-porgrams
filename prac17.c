#include<stdio.h>
#include<ctype.h>

int main(){
    char n;
    printf("enter your character :");
    scanf("%c",&n);
    if (isdigit(n) || isupper(n) || islower(n))
        printf("Its ascii value is %d",n);
    else 
        printf("Error");
return 0;
}