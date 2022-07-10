#include<stdio.h>

int factorial(int n){
    int fact=1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("Factorial of %d = %d",n,fact);
}

int main(){
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if (n <= 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
        factorial(n);
return 0;
}