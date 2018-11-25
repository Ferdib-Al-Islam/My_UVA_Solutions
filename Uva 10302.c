#include<stdio.h>
int main()
{
    long double x,sum;
    while(scanf("%Lf",&x)==1)
    {
        sum=(x*x*(x+1)*(x+1))/4;
        printf("%.0Lf\n",sum);
    }
    return 0;
}
