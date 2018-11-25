#include<stdio.h>
#include<math.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        double k,vat;
        scanf("%lf",&k);
        k=k-180000;
        if(k<1)
        {
            printf("Case %d: 0\n",i);
            continue;

        }
        k=k-300000;
        if(k<1)
        {
            k=k+300000;
            vat=(k*10)/100;
            vat=ceil(vat);

            if(vat<2000)
                printf("Case %d: 2000\n",i);
            else
                printf("Case %d: %.0lf\n",i,vat);
            continue;
        }
        vat=30000;
        k=k-400000;
        if(k<1)
        {
            k=k+400000;
            vat=(vat+(((k*15))/100));
            vat=ceil(vat);
            printf("Case %d: %.0lf\n",i,vat);
            continue;
        }
        vat=vat+60000;
        k=k-300000;
        if(k<1)
        {
            k=k+300000;
            vat=(vat+((k*20)/100));
            vat=ceil(vat);
            printf("Case %d: %.0lf\n",i,vat);
            continue;
        }
        vat=vat+60000;
        vat=(vat+((k*25)/100));
        vat=ceil(vat);
        printf("Case %d: %.0lf\n",i,vat);
        continue;
    }
    return 0;
}
