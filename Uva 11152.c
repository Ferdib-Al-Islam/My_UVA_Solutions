#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
    double a, b, c, i, j;
    double s, radius, rr, violet, sun, rose;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        s=(a+b+c)/2;
        violet=sqrt(s*(s-a)*(s-b)*(s-c));

        radius=((a*b*c)/(4*violet));
        rr=((violet/s));

        sun=(pi*pow(radius, 2))-violet;
        rose=(pi*pow(rr, 2));
        violet=(violet-rose);

        printf("%.4lf %.4lf %.4lf\n", sun, violet, rose);
    }
    return 0;
}
