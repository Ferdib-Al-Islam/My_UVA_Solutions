#include<stdio.h>
int main()
{
    long a, b, c, t, i=1;
    scanf("%ld", &t);
    while(i<=t)
    {
        scanf("%ld %ld %ld", &a, &b, &c);

        if((a>b&&a<c)||(c<a&&a<b))
            printf("Case %ld: %ld\n",i,a);
        if((b>a&&b<c)||(c<b&&b<a))
            printf("Case %ld: %ld\n",i,b);
        if((c>a&&b>c)||(c>b&&a>c))
            printf("Case %ld: %ld\n",i,c);
        i++;
    }
    return 0;
}
