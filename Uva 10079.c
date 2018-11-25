#include <stdio.h>
#include <stdlib.h>
void main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
        printf("%lld\n",((n*(n+1))/2)+1);
    }
    exit(0);
}
