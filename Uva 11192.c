#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,a,b,group;
    char s[101];
    while(scanf("%d",&group)==1)
    {
        if(group==0)
            break;
        scanf(" ");
        gets(s);
        l=strlen(s);
        a=l/group;
        for(i=1; i<=group; i++)
        {
            b=i*a;
            for(j=b-1; j>=b-a; j--)
                printf("%c",s[j]);
        }
        printf("\n");
    }
}
