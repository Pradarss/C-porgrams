#include<stdio.h>
int fact(int n){
    if (n>=1){
        return (n*fact(n-1));
    }
    else{
        return 1;
    }
}
void main(){
    int i;
    float holder;
    float n,x;
    float sum=0;
    printf("Enter limit n: ");
    scanf("%f",&n);
    printf("Enter value of X: ");
    scanf("%f",&x);
    for (i=1;i<=n;i++){
        sum=sum+(x/fact(i));
    }
    printf("%f",sum);
}