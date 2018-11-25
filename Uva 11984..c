#include<stdio.h>

int main()
{
    int t,i;
    double f,cel,c,d;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lf%lf",&c,&d);
            f=9*c/5+d;
            cel=f*5/9;
            printf("Case %d: %.2lf\n",i,cel);
        }
    }
    return 0;
}
