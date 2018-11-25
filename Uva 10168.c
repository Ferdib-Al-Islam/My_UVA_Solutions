#include<stdio.h>
#include<math.h>
#define max 10000005

unsigned long long s1[max],s2[max];
int prime[max];
void sieve_prime()
{
    int i,j,k,l,m,count=0;
    unsigned long long t=0;
    unsigned long long in;
    for(i=2; i<=max; i++)
        prime[i]=1;
    k=2;
    for(m=2; m<=sqrt(max); m++)
    {
        for(j=k+k; j<=max; j=j+k)
        {
            prime[j]=0;
        }
        k++;
        for(; !prime[k]; k++);
    }
    for(i=0; i<=max; i++)
    {
        if(prime[i])
        {

            if(prime[i+2])
            {
                s1[t]=i;
                s2[t]=i+2;
                t++;
            }
        }
    }
}

int main()
{
    sieve_prime();
    unsigned long long in,n1,n2,u;

    while(scanf("%llu",&in)==1)
    {
        if(in<8)
            printf("Impossible.");
        else
        {
            if(in%2==0)
            {
                printf("2 2 ");
                in=in-4;
            }
            else if(in%2==1)
            {
                printf("2 3 ");
                in=in-5;
            }
            for(u=2; u<=in; u++)
            {
                if(prime[u]==1 && prime[in-u]==1)
                {
                    printf("%llu %llu",u,in-u);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
