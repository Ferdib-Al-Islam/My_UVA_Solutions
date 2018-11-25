#include<stdio.h>

int main()
{
    double min,hour,a=0,han,man;
    while(scanf("%lf:%lf",&hour,&min)==2)
    {
        if((hour==0)&&(min==0))
            break;
        han=(hour+min/60)*30;
        man=min*6;

        a=(han-man);

        if(a<0)
            a*=-1;
        if(a>180)
            a=360-a;

        printf("%.3lf\n",a);
    }
    return 0;
}


