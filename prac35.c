#include<stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], c[n][n];

    printf("Enter the elements of 1st square matrix: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter the elements of the 2nd square matrix: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            c[i][j] = a[i][j] - b[i][j];
    }

    printf("Square matrix after subtracting the elements is \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    printf("\n");
    return 0;
}