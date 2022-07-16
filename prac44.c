#include <stdio.h>
int sum (int a);
int main()
{
    int n, r;
    printf("Enter the number: ");
    scanf("%d", &n);
    r = sum(n);
    printf("Sum of digits in %d is %d\n", n, r);
    return 0;
}
int sum (int n)
{
    if (n != 0)
    {
        return (n % 10 + sum (n / 10));
    }
    else
    {
       return 0;
    }
}