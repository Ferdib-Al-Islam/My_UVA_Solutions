#include<stdio.h>

int main()
{
    int t,i,j,n;
    double a0,an,ci;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        if(i>1)
            printf("\n");
        scanf("%d",&n);
        scanf("%lf",&a0);
        scanf("%lf",&an);

        double sum=0;
        for(j=0; j<n; j++)
        {
            scanf("%lf",&ci);
            sum+=(n-j)*ci;
        }
        printf("%.2lf\n",(n*a0+an-2*sum)/(n+1));

    }
    return 0;
}
