#include<stdio.h>

int main()
{
    long long n,e,c,a;
    int Case=0;
    while(scanf("%lld %lld",&n,&e)==2)
    {
        if(n<0&&e<0)
            break;
        c=0;
        a=n;
        while(n<=e)
        {
            if(n==1)
            {
                c++;
                break;
            }
            else if(n%2==0)
            {
                c++;
                n/=2;
            }
            else if(n%2==1)
            {
                c++;
                n=n*3+1;
            }

        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",
           ++Case,a,e,c);
    }
    return 0;
}
