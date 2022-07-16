#include<stdio.h>

int cube(int n)
{
    return (n*n*n);
}

void main()
{
    for(int i = 1; i <= 10; i++)
        printf("The cube of %d is %d\n", i, cube(i));

    printf("\n\n");
}