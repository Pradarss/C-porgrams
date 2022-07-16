#include<stdio.h>

int main()
{
    int n, el, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element which you want to search: ");
    scanf("%d", &el);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == el)
            break;
    }
    
    if(i >= n)
        printf("\nElement not found in this array!!\n\n");
    else 
        printf("\nThe required element is present at position no %d\n\n", i+1);

    return 0;
}


