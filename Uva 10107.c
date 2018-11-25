#include<stdio.h>

int main()
{
    long long a[100000],n,i=0,l,j,t;
    while(scanf("%lld", &n)==1)
    {
        a[i]=n;
        for(j=0; j<a[i]-1; j++)
        {
            for(i=0; i<a[i]-j-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        if(i%2==0)
            printf("%lld\n", a[i/2]);
        else
        {
            l=a[i/2]+a[i/2+1];
            printf("%lld\n", l/2);
        }
        i++;
    }
    return 0;
}
