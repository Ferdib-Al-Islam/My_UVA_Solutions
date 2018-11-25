#include<stdio.h>

int main()
{
    long long x,a[14],i;
    a[0]=1;
    for(i=1; i<14; i++)
    {
        a[i]=a[i-1]*i;
    }
    while(scanf("%lld",&x)==1)
    {
        if(x<0)
        {
            if(x%2==0)
            {
                printf("Underflow!");
            }
            else
            {
                printf("Overflow!");
            }
        }
        else if(x<8 && x>-1)
        {
            printf("Underflow!");
        }
        else if(x>13)
        {
            printf("Overflow!");
        }
        else
        {
            printf("%lld\n",a[x]);
        }
    }
    return 0;
}
