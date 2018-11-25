#include<stdio.h>
int main()
{
    long frnd,bud,hotel,wk,amt,cost=15000000,b,p,visit,i,j,room;
    while(scanf("%ld %ld %ld %ld",&frnd,&bud,&hotel,&wk)==4)
    {
        for(i=0; i<hotel; i++)
        {
            scanf("%ld",&amt);
            for(j=0; j<wk; j++)
            {
                scanf("%ld",&room);
                p=0;
                if(room>=frnd)
                {
                    p=amt*frnd;
                    if(cost>p)
                        cost=p;
                }
            }
        }
        if(cost>bud)
            printf("stay home\n");
        else
            printf("%ld\n",cost);
        cost=15000000;
    }
    return 0;
}
