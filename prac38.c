#include<stdio.h>
void main(){
    int i,j,n,k; 
      
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    printf("\n");
    int arr1[n][n];
    int arr2[n][n];
    int arr3[n][n];
    printf("Enter the value of array elements in the array: ");
    for ( i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    for ( i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for ( i=0;i<n;i++){
        for(int k=0;k<i;k++){
                printf(" ");
            }
        for(j=i;j<n;j++){
            
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
}