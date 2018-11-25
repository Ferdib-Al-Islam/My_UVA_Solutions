#include<stdio.h>
#include<math.h>
int main()
{
    long x, temp;
    while(scanf("%ld",&x)==1)
    {
        if(x==0)
            break;
        int n=ceil(sqrt(x));
        long i,j;
        if(n%2==0)
        {
            temp=n*n-n+1;
            i=n;
            j=n;
            while(temp<x)
            {
                j--;
                temp++;
            }
            while(temp>x)
            {
                i--;
                temp--;
            }
        }
        else
        {
            long temp=n*n-n+1;
            i=n;
            j=n;
            while(temp<x)
            {
                i--;
                temp++;
            }
            while(temp>x)
            {
                j--;
                temp--;
            }
        }
        printf("%ld %ld\n",i,j);
    }
    return 0;
}
