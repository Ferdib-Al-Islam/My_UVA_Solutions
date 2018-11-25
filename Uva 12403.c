#include<stdio.h>
#include<string.h>

int main ()
{
    int t,s=0,m=0;
    char a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        if(strcmp(a,"donate")==0)
        {
            scanf ("%d",&m);
            s=s+m;
        }
        else
            printf ("%d\n",s);
    }
    return 0;

}
