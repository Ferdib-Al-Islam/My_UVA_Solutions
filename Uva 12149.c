#include<stdio.h>

int main()
{
    int n,i;
    while(scanf("%d",&n) && n)
    {
        long long j,sum=0;
        for(i=1; i<=n; i++)
        {
            j=i*i;
            sum+=j;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

