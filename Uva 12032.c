#include<stdio.h>
int main()
{
    long long t,Case=1;
    scanf("%lld",&t);

    for(t; Case<=t; ++Case)
    {
        long long n,i,count=-1,a[200000];
        scanf("%lld",&n);

        a[0]=0;
        for(i=1; i<=n; ++i)
            scanf("%lld",&a[i]);
        for(i=0; i<n; i++)
            a[i]=a[i+1]-a[i];
        for(i=i-1; i>=0; i--)
        {
            if(a[i]>count)
                count = a[i];
            else if(a[i]==count)
                count++;
        }
        printf("Case %lld: %lld\n",Case,count);
    }
    return 0;
}
