#include<stdio.h>

int main()
{
    int i = 0;
    float arr[10], sum = 0; 

    printf("Enter the numbers: ");

    while(i < 10)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
        i++;
    }

    printf("Sum of the entered numbers is: %f\n", sum);
    printf("Average of the entered numbers is: %f", sum/10);

    printf("\n\n");
    return 0;
}