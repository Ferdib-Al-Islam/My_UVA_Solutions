#include<stdio.h>
#include<math.h>

int main()
{
    long long n,x=8,t=0;
    double m;
    while(1)
    {
        m=sqrt((x*x+x)/2);
        n=m;
        if(n==m)
        {
            printf("%10lld%10lld\n",n,x);
            t++;
        }
        if(t==10)
            break;
        x++;
    }
    return 0;
}
