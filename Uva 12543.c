#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000],s1[1000],s2[1000];
    int i,l,j,n=0;
    while(scanf("%s",s))
    {
        j=0;
        if(s[0]=='E'&&s[1]=='-'&&s[2]=='N'&&s[3]=='-'&&s[4]=='D')
            break;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s1[j]=s[i]+32;
                j++;
            }
            else if((s[i]>='a'&&s[i]<='z')||(s[i]=='-'))
            {
                s1[j]=s[i];
                j++;
            }

        }
        if(j>n)
        {
            n=j;
            for(i=0; i<n; i++)
                s2[i]=s1[i];
        }
        s2[n]='\0';
    }
    printf("%s\n",s2);

    return 0;
}
