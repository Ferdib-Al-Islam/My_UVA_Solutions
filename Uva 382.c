#include<stdio.h>

int main()
{
    int n, i, j, k, l, m, sum, a;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        a=n;
        if(n==0)
            break;
        sum=0;
        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum+=i;
        }
        if(sum==a)
        {
            printf("%5d  PERFECT\n",a);
        }
        else if(sum<a)
        {
            printf("%5d  DEFICIENT\n",a);
        }
        else
        {
            printf("%5d  ABUNDANT\n",a);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
