#include<stdio.h>

int main()
{
    int i, t = 66;

    for(i = 0; i < 5; i++)
    {
        for(int j = 65; j < t; j++)
            printf("%c ",j);
        printf("\n");
        t++;
    }

    return 0;
}