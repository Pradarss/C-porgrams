#include<stdio.h>

int digisum(int i)
{
    int t, sum = 0, l = 0;

    do
    {
        t = i % 10;
        sum = sum + t;
        i = i / 10;
        l++;
    } while(i > 0);

    if(l < 3)
    {
        printf("Enter minimum a three digit number!  Try again...");
        printf("\nEnter the number again: ");
        scanf("%d", &i);
        digisum(i);
    }
    else
        printf("Sum of the entered number is : %d", sum);

    return 0;
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    digisum(n);

    printf("\n\n");
    return 0;
}