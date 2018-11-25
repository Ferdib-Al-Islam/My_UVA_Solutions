#include<stdio.h>
#include<math.h>

long long H(int n)
{
    long long m=sqrt(n);
    long long res=0,i;
    for(i=1; i<=m; i++)
    {
        res+=n/i;
    }
    return res*2-m*m;
}
int main()
{
    long long a;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &a);
        printf("%lld\n", H(a));
    }
    return 0;
}
