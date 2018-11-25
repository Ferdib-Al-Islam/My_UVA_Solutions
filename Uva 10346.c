#include<stdio.h>
int main()
{
    long a,n,k;
    while(scanf("%ld %ld",&n,&k)==2 && k>1)
    {
        a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%ld\n",a);
    }
    return 0;
}
