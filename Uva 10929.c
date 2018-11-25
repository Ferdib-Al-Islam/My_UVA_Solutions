#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,s;
    char a[1050];
    while(1)
    {
        s=0;
        scanf("%s",&a);
        i=strlen(a);
        for(j=0; j<i; j++)
        {
            s=s*10+a[j]-'0';
            s=s%11;
        }
        if(s==0 && i==1)
            break;
        else if(s==0)
            printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
