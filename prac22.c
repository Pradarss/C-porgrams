#include<stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, copy;

    printf("Enter the term number upto which you want to print fibonacci series: ");
    scanf("%d", &n);

    while(n < 1)
    {
        printf("Entered value is incorrect! Please enter a valid value...\n");
        scanf("%d", &n);
    }

    printf("Fibonacci series upto %d is ", n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", t1);
        copy = t1 + t2;
        t1 = t2;
        t2 = copy;
    }

    printf("\n\n");
    return 0;
}