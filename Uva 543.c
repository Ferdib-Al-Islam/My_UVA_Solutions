#include<stdio.h>
#include<math.h>

con(long n)
{
    long i,j;
    if(n==1)
        return 0;

    if(n==2)
        return 1;

    if(n%2==0)
        return 0;

    long l=sqrt(n);

    for(i=3; i<=l; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
long main()
{
    long a,b,i,m,n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;

        else if(n<6 && n>0)
        {
            printf("Goldbach's conjecture is wrong.\n");
            continue;
        }

        a=0,b=0;

        for(i=n-1; i>=sqrt(n); i--)
        {
            if(con(i))
            {
                m=n-i;
                if(con(m))
                {
                    if(i%2==1 && m%2==1)
                    {
                        a=i;
                        b=m;
                        break;
                    }
                }
            }
        }

        if(a>0 && b>0 && a<=b)
            printf("%ld = %ld + %ld\n",n,a,b);
        else if(a>0 && b>0 && b<a)
            printf("%ld = %ld + %ld\n",n,b,a);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

