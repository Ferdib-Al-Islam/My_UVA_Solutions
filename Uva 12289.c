#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char s[10],ch;
    scanf("%d%c",&n,&ch);
    while(n--)
    {
        gets(s);
        if(strlen(s)==5)
            puts("3");
        else if((s[0]=='o' && s[1]=='n')||(s[0]=='o' && s[2]=='e')||(s[1]=='n' && s[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
