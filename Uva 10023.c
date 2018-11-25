#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    long long Y;
    int i,t;
    scanf("%d",&t);
    if(t==1)
        for(i=0; i<t; i++)
        {
            scanf("%lld",&Y);
            printf("%lld\n",sqrtl(Y));
        }
    else
        for(i=0; i<t; i++)
        {
            scanf("%lld",&Y);
            printf("%lld\n\n",sqrtl(Y));
        }
    exit(0);
}
