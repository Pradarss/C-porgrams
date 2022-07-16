#include<stdio.h>

int main()
{
    int n, i, j, sum1 = 0, sum2 = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of square matrix: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\nThe entered matrix is\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nThe diagonal elements of the matrix are: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum1 = sum1 + a[i][j];
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\nThe elemets of other diagonal of the matrix are: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i + j == n-1)
            {
                sum2 = sum2 + a[i][j];
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n\nSum of the diagonal of the square matrix is %d", sum1);
    printf("\nSum of the other diagonal of the square matrix is %d\n", sum2);

    printf("\n");
    return 0;
}