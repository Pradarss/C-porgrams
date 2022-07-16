#include<stdio.h>
void main(){
    int i,j,n,temp;
    
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the values of  unsorted array elements: ");
    for ( i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    for ( i=0;i<n+1;i++){
        for (j=0;j<n+1;j++){
            if (arr1[j]>arr1[j+1]){
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for ( i=0;i<n;i++){
        printf(" %d ",arr1[i]);
    }

}