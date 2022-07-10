#include<stdio.h>

int decimaltobinarytooctal(int n){
	unsigned int ans=0;
	unsigned int x=1;
	while(x<=n)
		x*=2;
    x/=2;
	while(x>0){
		int LastDigit=n/x;
		n-=LastDigit*x;
		x/=2;
		ans=ans*10+LastDigit;
	}
    printf("Equivalent binary value: %d",ans);
	unsigned long int octalnum = 0, j = 1, remainder;
	while (ans != 0)
    {
        remainder = ans % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        ans = ans / 10;
    }
    printf("\nEquivalent octal value: %lo", octalnum);
	return 0;
}

int main(){
	int n;
	printf("Enter decimal value: ");
	scanf("%d",&n);
	if(n>=0)
    	decimaltobinarytooctal(n);
	else
		printf("Error");
return 0;
}