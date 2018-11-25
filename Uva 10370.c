#include<stdio.h>
int main()
{
    int a[1001],i,j,n,sum,t,c,avr;
    float ans;
    while(scanf("%d",&t)==1)
    {
        for(j=0; j<t; j++)
        {
            c=0;
            sum=0;
            scanf("%d",&n);

            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0; i<n; i++)
            {
                sum=sum+a[i];
            }
            avr=sum/n;
            for(i=0; i<n; i++)
            {
                if(a[i]>avr)
                    c++;
            }
            ans=((float)c/(float)n);
            printf("%.3f%%\n",ans*100);
        }
    }
    return 0;
}
