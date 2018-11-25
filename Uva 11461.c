#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int a , b, i, c;
    while(scanf("%lld %lld",&a,&b) && (a!=0 || b!=0))
    {
        c=0;
        for(i=a; i<=b; i++)
        {
            int j = sqrt(i);
            if(i==j*j)
                c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
