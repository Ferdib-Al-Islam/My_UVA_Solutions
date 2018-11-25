#include<stdio.h>
#include<math.h>
#define Pi acos(-1)
int main()
{
    int t;
    double a,r,h,g,l;
    scanf("%d",&t);
    while(t--)
    {
        r=0;
        scanf("%lf",&l);
        r=l/5;
        h=(l*6)/10;
        a=Pi*r*r;
        g=(l*h)-a;
        printf("%.2lf %.2lf\n",a,g);
    }
    return 0;
}

