#include<stdio.h>
#include<string.h>

int main()
{
    int l,a,b,c,d,e,i,j,k,t;
    char s1[100],s2[1000];
    while(scanf("%d",&t)==1)
    {
        scanf(" ");
        for(j=0; j<t; j++)
        {
            gets(s1);
            gets(s2);
            l=strlen(s1);
            e=strlen(s2);
            for(i=0; i<l; i++)
            {
                if(s1[i]=='<')
                    a=i;
                if(s1[i]=='>')
                {
                    b=i;
                    break;
                }
            }
            for(i=b+1; i<l; i++)
            {
                if(s1[i]=='<')
                    c=i;
                if(s1[i]=='>')
                {
                    d=i;
                    break;
                }
            }
            for(i=0; i<l; i++)
            {
                if(s1[i]!='<' && s1[i]!='>')
                    printf("%c",s1[i]);
            }
            printf("\n");
            for(i=0; i<e-3; i++)
                printf("%c",s2[i]);
            for(i=c+1; i<d; i++)
                printf("%c",s1[i]);
            for(i=b+1; i<c; i++)
                printf("%c",s1[i]);
            for(i=a+1; i<b; i++)
                printf("%c",s1[i]);
            for(i=d+1; i<l; i++)
                printf("%c",s1[i]);
            printf("\n");
        }
    }
    return 0;
}
