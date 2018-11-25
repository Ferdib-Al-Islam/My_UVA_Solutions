#include<stdio.h>
#include<math.h>

void factors(long n)
{
    int count=1;
    while(n%2==0)
    {
        if(count)
        {
            printf("2");
            count=0;
        }
        else
        {
            printf(" x 2");
        }
        n=n/2;
    }
    long i=3;
    long r=(sqrt(n))+1;
    while (i<=r)
    {
        if((n%i)==0)
        {
            if (count)
            {
                printf("%ld", i);
                count = 0;
            }
            else
            {
                printf(" x %ld", i);
            }
            n /= i;
        }
        else
        {
            i += 2;
        }
    }
    if(n>1)
    {
        if(count)
        {
            printf("%ld", n);
        }
        else
        {
            printf(" x %ld", n);
        }
    }
}

int main()
{
    long n;
    while(1)
    {
        scanf("%ld", &n);
        if (n==0)
        {
            break;
        }
        printf("%ld = ", n);
        if(n<0)
        {
            printf("-1 x ");
            n=-n;
        }
        factors(n);
        printf("\n");
    }
    return 0;
}
