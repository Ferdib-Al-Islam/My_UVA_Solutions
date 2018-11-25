#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    double x,s,y,z,A;

    while(scanf("%lf",&s)==1)
    {
        A=s*s;
        y=A*(1-sqrt(3)+pi/3);
        z=A*(2*sqrt(3)-4+pi/3);
        x=A*(4 -sqrt(3)-2*pi/3);
        printf("%.3f %.3f %.3f\n", y, z, x);
    }
    return 0;
}
