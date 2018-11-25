#include<stdio.h>

int main()
{
    int number[105];
    int tc, n, cap, t, i, j, tem;
    while(scanf("%d", &tc)==1)
    {
        for(t=1; t<=tc; t++)
        {
            scanf("%d", &n);

            for(i=0; i<n; i++)
            {
                scanf("%d", &number[i]);
            }

            for(i=0; i<n-1; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(number[i]>number[j])
                    {
                        tem=number[i];
                        number[i]=number[j];
                        number[j]=tem;
                    }
                }
            }
            cap=n/2;
            printf("Case %d: %d\n",t, number[cap]);
        }
    }
    return 0;
}
