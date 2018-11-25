#include<stdio.h>
#include<math.h>
#define max 1000005

char prime[max];
int dp[max];

void sieve_prime()
{
    int i,j,k,l,m,count=0,d,s,temp,sum2,t=0,p;
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
    }
    s=0;
    for(d=0; d<=max; d++)
    {

        if(prime[d])
        {

            temp=d;
            sum2=0;
            while(temp>=10)
            {
                sum2+=temp%10;
                temp=temp/10;
            }
            sum2+=temp;
            if(prime[sum2])
                s++;
        }
        dp[d]=s;
    }
}

int main()
{
    sieve_prime();
    int n1,count,test,low,up;
    scanf("%d",&test);
    for(n1=0; n1<test; n1++)
    {
        scanf("%d %d",&low,&up);
        printf("%d\n",dp[up]-dp[low-1]);
    }
    return 0;
}
