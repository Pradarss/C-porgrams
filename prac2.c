/*Write a program to calculte size of datatypes*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Size of integer is %d\n", sizeof(a));
    printf("Size of float is %d\n", sizeof(b));
    printf("Size of character is %d\n", sizeof(c));
    printf("Size of double is %d\n", sizeof(d));
    getch();
    return 0;
}