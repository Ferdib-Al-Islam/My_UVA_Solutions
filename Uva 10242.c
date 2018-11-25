#include<stdio.h>

int main ()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,r,k,m,n,x,y,p,a,b,q ;

    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)==8)
    {
        if(x1==x2 && y1==y2)
        {
            p=x3 ;
            q=x4 ;
            a=y3;
            b=y4 ;
            m=x1 ;
            n=y1 ;
        }
        else if(x1==x3 && y1==y3)
        {
            p=x2 ;
            q=x4 ;
            a=y2;
            b=y4 ;
            m=x1 ;
            n=y1;
        }
        else if(x1==x4 && y1==y4)
        {
            p=x3 ;
            q=x2 ;
            a=y2;
            b=y3 ;
            m=x1 ;
            n=y1;
        }
        else if(x2==x3 && y2==y3)
        {
            p=x1 ;
            q=x4 ;
            a=y1;
            b=y4 ;
            m=x2 ;
            n=y2;
        }
        else if(x2==x4 && y2==y4)
        {
            p=x3 ;
            q=x1 ;
            a=y3;
            b=y1 ;
            m=x2;
            n=y2;
        }
        else if(x3==x4 && y3==y4)
        {
            p=x2 ;
            q=x1 ;
            a=y2;
            b=y1 ;
            m=x3;
            n=y3;
        }

        r=(p+q)/2.00 ;
        k=(a+b)/2.00 ;

        x=2.00*r-m ;
        y=2.00*k-n ;

        printf("%.3lf %.3lf\n",x,y) ;
    }
    return 0;
}
