#include<stdio.h>
#include<math.h>

int prime(long x)
{
    long i;
    for(i=2; i*i<=x; i++)
    {
        if(x%i == 0)
            return 0;
    }
    return 1;
}
int rev(long n)
{
    long r=0;
    while(n>0)
    {
        r=r*10 + n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    long n,m;
    while(scanf("%ld", &n)==1)
    {
        if(prime(n)!=1)
            printf ("%ld is not prime.\n", n);
        else
        {
            m=rev(n);
            if(prime(m)==1 && m!=n)
                printf ("%ld is emirp.\n",n);
            else
                printf ("%ld is prime.\n",n);
        }
    }
    return 0;
}
