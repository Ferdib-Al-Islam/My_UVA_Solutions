#include<stdio.h>

int main ()
{
    int probnumber;
    int month[13];
    int required[13];
    int Case=0;

    while(scanf("%d",&probnumber))
    {
        if(probnumber<0)
            return 0;

        month[0]=probnumber;

        int i;
        for(i=1;i<=12;i++)
            scanf("%d",&month[i]);

        for(i=0;i<12;i++)
            scanf ("%d",&required[i]);
        printf("Case %d:\n",++Case);
        for(i=0;i<12;i++)
        {
            if(probnumber>=required[i])
            {
                probnumber-=required[i];
                printf("No problem! :D\n");
            }
            else
                printf("No problem. :(\n");
            probnumber+= month[i+1];
        }
    }
    return 0;
}
