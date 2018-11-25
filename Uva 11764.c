#include<stdio.h>
int main()
{
    int n,i,c,k,high,low,a,s[50];

    while(scanf("%d",&a)==1)
    {
        for(c=1; c<=a; c++)
        {
            high=0;
            low=0;
            scanf("%d",&n);

            for(i=0; i<n; i++)
                scanf("%d",&s[i]);
            for(i=1; i<n; i++)
            {
                if(s[i]>s[i-1])
                    high++;
                if(s[i-1]>s[i])
                    low++;
            }
            printf("Case %d: %d %d\n",c,high,low);
        }
    }
    return 0;
}
