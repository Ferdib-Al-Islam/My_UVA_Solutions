#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()
{
    double l,x,s=sin(72*PI/180)/sin(63*PI/180);

    while(scanf("%lf", &l)==1)
    {
        x=s*l;
        printf("%.10lf\n",x);
    }
    return 0;
}
