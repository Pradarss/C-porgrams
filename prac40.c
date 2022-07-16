#include<stdio.h>

int fact(int a)
{
    int t = 1;

    for(int i = 1; i <= a; i++)
        t*=i;

    return t;
}

void main()
{
    int n;

    printf("Enter the number whose factorial you want: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n\n", n, fact(n));
}