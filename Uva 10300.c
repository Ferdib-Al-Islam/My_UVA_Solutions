#include<stdio.h>

int main()
{
    long a,b,c,x=0,n,farmer;
    while(scanf("%ld",&n)==1)
    {
        while(n--)
        {
            x=0;
            scanf("%ld",&farmer);
            while(farmer--)
            {
                scanf("%ld %ld %ld",&a,&b,&c);
                x+=a*c;
            }
            printf("%ld\n",x);
        }
    }
    return 0;
}
