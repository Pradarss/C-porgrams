/*Write a program to add, subtract, divide and multiply two numbers*/
#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b;
    printf("Enter your first number : ");
    scanf("%f", &a);
    printf("Enter your second number : ");
    scanf("%f", &b);
    float add = a + b;
    float sub = a - b;
    float div = a / b;
    float mul = a * b;
    printf("Addition of Numbers is %f\n", add);
    printf("Subtraction of Numbers is %f\n", sub);
    printf("division of Numbers is %f\n", div);
    printf("multiplication of Numbers is %f\n", mul);
    getch();
    return 0;
}