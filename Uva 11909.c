#include<stdio.h>
#include<math.h>

int main()
{
    long l,w,h,angle;
    double pi=acos(-1);
    while(scanf("%ld %ld %ld %ld",&l,&w,&h,&angle)==4)
    {
        double d=l*tan(angle*pi/180.0);
        double V;
        if(d>h)
        {
            V=0.5*h*h*l*w/d;
        }
        else
        {
            V=l*w*((h)-(d*0.5));
        }
        printf("%.3lf mL\n",V);
    }
    return 0;
}
