#include<stdio.h>

int main()
{
    long long v, p, q, m, x;

    while(scanf("%lld %lld", &m, &x)==2)
    {
        if (!m && !x)
            return 0;

        if (m==1 || x==0 || x==100)
        {
            printf("Not found\n");
            continue;
        }
        v=(100*(m-1))/(100-x);

        if(((100*(m-1))%(100-x))==0)
            v--;

        if (v<m)
        {
            printf("Not found\n");
        }
        else
        {
            printf("%lld\n", v);
        }
    }
    return 0;
}
