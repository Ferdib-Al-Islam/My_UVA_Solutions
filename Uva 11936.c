#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a+b>c && b+c>a && a+c>b)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
