#include<stdio.h>
#include<ctype.h>

int main(){
    char n;
    printf("enter your char : ");
    scanf("%c",&n);
    if(isupper(n)){
        printf("\n%c is an uppercase char",n);
    }
    else if(islower(n)){
        printf("\n%c is a lowercase char",n);
    }
    else if(isdigit(n)){
        printf("\n%c is a number",n);
    }
    else{
        printf("\n%c is a special symbol",n);
    }
    return 0;
}