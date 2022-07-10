#include<stdio.h>

int main(){
    char n;
        printf("Enter your String :");
        scanf("%c",&n);
        if(n > 64 && n < 91){
            n += 32;
        }
        else{
            n-=32;
        }
        printf("%c",n);
    return 0;
}