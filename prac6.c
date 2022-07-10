#include<stdio.h>
int main()
{
    int a;
    float f, c;

    printf("\n\nPRESS 1 to do fahrenheit to centigrade conversion and PRESS 2 to vice versa: ");
    scanf("%d", &a);

    if(a == 1)
    {
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &f);

        printf("\nThe temperature in centigrade is: %f\n\n", (f-32) * 5/9);
    }
    else if(a == 2)
    {
        printf("Enter the temperature in centigrade: ");
        scanf("%f", &c);

        printf("\nThe temperature in fahrenheit is: %f\n\n", (c * 9/5) + 32);
    }
    else
        printf("Choose only from 1 and 2...\n\n");

    return 0;
}