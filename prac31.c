#include<stdio.h>
void main(){
    int arr1[10];
    printf("Enter the values of array elements: ");
    for (int j=0;j<10;j++){
        scanf("%d",&arr1[j]);
    }
    int min=arr1[0];
    int max=arr1[0];
    for (int i=0;i<10;i++){
        if(arr1[i]<min){
            min=arr1[i];
        }
        else if(arr1[i]>max){
            max=arr1[i];
        }
    }
    printf("max= %d\n",max);
    printf("min= %d", min);
}