#include<stdio.h>

int area(int a)
{
    int t;

    t = (22 * a * a)/7;

    return t;
}

void main()
{
    int r;

    printf("Enter the radius of the cirlce: ");
    scanf("%d", &r);

    printf("Area of the circle is %d\n\n", area(r));
}