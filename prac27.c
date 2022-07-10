#include<stdio.h>

int main()
{

    for(int i = 3; i < 10; i+=2)
    {
        for(int j = 9;j >= i-2; j--){
            printf("%d ",j);
        }
        printf("\n");
        for(int j = 8;j >= i-2; j--){
            printf("%d ",i-2);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
