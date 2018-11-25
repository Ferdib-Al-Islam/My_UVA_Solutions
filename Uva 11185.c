#include<stdio.h>
int main()
{
    long long i,n,j,t[1050];
    while(scanf("%lld",&n))
    {
        if(n<0)
            break;
        else if(n==0)
        {
            printf("0\n");
        }
        else
        {
            i=0;
            while(n>0)
            {
                t[i]=n%3;
                n=n/3;
                i++;
            }
            i=i-1;
            for(j=i; j>=0; j--)
                printf("%lld",t[j]);
            printf("\n");
        }
    }
    return 0;
}
