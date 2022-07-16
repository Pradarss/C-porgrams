#include<stdio.h>
int main()
{
    char str[100];
    int i,count = 0;
    scanf("%s",str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if( str[i] == ('a'&&'A') ||
            str[i] == ('e'&&'E') ||
            str[i] == ('i'&&'I') || 
            str[i] == ('o'&&'O') || 
            str[i] == ('u'&&'U'))
        {
            count++;
        }
    }
    printf("vowel count = %d\n",count);
    return 0;
}