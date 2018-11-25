#include<stdio.h>

int main()
{
    long a,b,t;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(b%a==0)
            printf("%lld %lld\n",a,b);
        else
            printf("-1\n");
    }
    return 0;
}
