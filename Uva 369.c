#include<stdio.h>

long long nCr(long long n,long long m)
{
    long long a=1,i;
    if(n-m<m)
        m=n-m;
    for(i=1; i<=m; i++,n--)
    {
        a=a*n;
        a=a/i;
    }
    return a;
}

int main()
{
    long long n,r;
    while(scanf("%lld %lld",&n,&r)==2)
    {
        if(n==0&&r==0)
            break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,nCr(n,r));
    }
    return 0;
}
