/*Write a program to calculte simple interest*/
#include <stdio.h>
#include <conio.h>

int main()
{
    float P, R, T, SI;
    printf("Enter principle : ");
    scanf("%f", &P);
    printf("Enter rate of interest : ");
    scanf("%f", &R);
    printf("Enter time period : ");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    printf("\n\nSimple Interest is : %f", SI);
    return 0;
}