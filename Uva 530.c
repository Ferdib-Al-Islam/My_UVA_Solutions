#include <stdio.h>

long diff(long x,long y)
{
    if(x<y)
        return x;
    return y;
}
long nCr(long n, long r)
{
    long long ways=1;
    r=diff(r,n-r);
    long i;
    for(i=1;i<r+1;i++)
    {
        ways*=(n-r+i);
        ways/=i;
    }
    return ways;
}
int main()
{
    long n,r;
    while(1)
    {
        scanf("%lld %lld",&n,&r);
        if(n==0 && r==0)
            break;
        printf("%lld\n",nCr(n,r));
    }
    return 0;
}
