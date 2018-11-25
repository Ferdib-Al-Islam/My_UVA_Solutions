#include<stdio.h>
#define max 1000000

int s[max];

void genarator()
{
    unsigned long long i,j,k,sum;

    for(i=0; i<=max; i++)
    {
        sum=i;
        j=i;
        while(j>=10)
        {
            sum+=j%10;
            j=j/10;
        }
        sum+=j;
        s[sum]=1;
    }
}

int main()
{
    genarator();
    unsigned long long u;

    for(u=0; u<=max; u++)
    {
        if(s[u]==0)
            printf("%llu\n",u);
    }
    return 0;
}
