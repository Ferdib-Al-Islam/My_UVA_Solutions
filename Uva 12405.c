#include<stdio.h>

int main()
{
    int t,n,Case,count,i;
    char a[101];

    while(scanf("%d",&t)==1)
    {
        for(Case=1; Case<=t; Case++)
        {
            scanf("%d %s", &n, a);
            count=0;
            for(i=0; i<n;)
            {
                if(a[i] == '#')
                    i++;
                else
                {
                    count++;
                    i+=3;
                }
            }
            printf("Case %d: %d\n",Case,count);
        }
        break;
    }
    return 0;
}
