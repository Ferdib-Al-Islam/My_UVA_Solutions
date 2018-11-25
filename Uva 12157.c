#include<stdio.h>

int main()
{
    int t, n, mile, juice, x, Case=0, i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        mile=juice= 0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&x);
            mile += (x+30)/30;
            juice += (x+60)/60;
        }

        mile *= 10;
        juice *= 15;

        printf("Case %d: ",++Case);
        if(mile<juice)
            printf("Mile %d\n",mile);
        else if(juice<mile)
            printf("Juice %d\n",juice);
        else
            printf("Mile Juice %d\n",mile);
    }
    return 0;
}
