#include <stdio.h>

int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int b, i;
    printf("Enter the number upto which you want to print prime numbers : ");
    scanf("%d", &b);

    while (b < 1)
    {
        printf("Entered value is wrong... Enter again!\n");
        scanf("%d", &b);
    }

    printf("Prime numbers between 1 and %d are ", b);

    for (i = 1; i <= b; i++)
    {
        if (prime(i) == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n\n");
    return 0;
}