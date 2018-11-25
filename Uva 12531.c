#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    while(scanf("%d", &a)==1)
    {
        int p=0,h,m,min,diff,hr;
        for(h=0; h<=11; h++)
        {
            for(m=0; m<=59; m++)
            {
                min=m*360.0/60.0;
                hr=h*360.0/12.0;
                diff=abs(min-hr);

                if(diff>180)
                    diff=360-diff;

                if(diff==a)
                    p=1;
            }
        }
        if(p==1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
