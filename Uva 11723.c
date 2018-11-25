#include<stdio.h>

int main()
{
    int r,n,suffix,test=1;

    while(scanf("%d %d", &r, &n)==2)
    {
        if(r==0 && n==0)
            break;

        suffix=(r-1)/n;

        if(suffix<=26)
            printf("Case %d: %d\n", test, suffix);
        else
            printf("Case %d: impossible\n", test);
        test++;
    }
    return 0;
}
