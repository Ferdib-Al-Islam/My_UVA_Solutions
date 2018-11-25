#include<stdio.h>
#include<math.h>

int main()
{
    double m1,m2,m3;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3)
    {
        double med=(m1+m2+m3)/2.0;
        double area=(4/3.0)*sqrt(med*(med-m1)*(med-m2)*(med-m3));
        if(!(area>0))
        {
            area=-1.0;
        }
        printf("%.3lf\n",area);
    }
    return 0;
}
