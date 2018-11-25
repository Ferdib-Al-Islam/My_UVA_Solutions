#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    long long a[10001], n, i=0, m;
    while(scanf("%lld", &n)==1)
    {
        a[i]=n;
        sort(a, a+i+1);
        if(i%2==0)
        {
            printf("%lld\n", a[i/2]);
        }
        else
        {
            m=(a[i/2]+a[(i/2)+1])/2;
            printf("%lld\n", m);
        }
        i++;
    }
    return 0;
}
