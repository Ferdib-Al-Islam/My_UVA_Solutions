#include<stdio.h>
int main()
{
    int n,age[2000001],i,j,m;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        m=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&age[i]);
        }
        for(i=0; i<=100; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(age[j]==i && m<n-1)
                {
                    printf("%d ",i);
                    m++;
                }
                else if(age[j]==i && m==n-1)
                {
                    printf("%d\n",i);
                    m++;
                }
                if(m==n)
                    break;
            }
        }
    }
    return 0;
}
