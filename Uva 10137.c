#include<stdio.h>

int main()
{
    int n,i;
    double sum=0,avg=0;
    while(1)
    {
        scanf("%d",&n);
        double a[n];
        if(n==0)
            break;
        sum=0;
        avg=0;
        for(i=0; i<n; i++)
        {
            scanf("%lf",&a[i]);
            sum+=a[i];
        }
        avg=sum/n;

        double sum1=0,sum2=0,dif=0;

        for(i=0; i<n; i++)
        {
            dif=(double)(long)((a[i]-avg)*100)/100.0;
            if(dif<0)
                sum2-=dif;
            else
                sum1+=dif;
        }
        if(sum2>sum1)
        {
            printf("$%.2lf\n", sum2);
        }
        else
        {
            printf("$%.2lf\n", sum1);
        }
    }
    return 0;
}
