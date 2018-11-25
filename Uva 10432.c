#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265359
void main()
{
    double r, n, angle, h, t, a;
    while(scanf("%lf %lf", &r, &n)!= EOF)
    {
        angle = (pi*2)/n;
        h = (sin(angle)*r);
        t = (h*r)/2;
        a = n*t;
        printf("%.3lf\n",a);
    }
    exit(0);
}
