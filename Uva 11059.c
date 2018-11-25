#include <stdio.h>

int main()
{
    int t=0,count=1;
    while(scanf("%d",&t)==1)
    {
        int i,j,k,x[t];

        for(i=0; i<t; i++)
            scanf("%d",&x[i]);
        long m=0;
        for(i=0; i<t; i++)
        {
            for (j=i; j<t; j++)
            {
                long p=1;
                for(k=i; k<=j; k++)
                {
                    p*=x[k];
                }
                if(m<p)
                    m=p;
            }
        }
        printf("Case #%d: The maximum product is %ld.\n\n",count,m);
        count++;
    }
    return 0;
}
