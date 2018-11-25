#include<stdio.h>
#include<stdlib.h>

int main()
{
    int strt[100000],dist,i,j,k,r,t,d,min=0,temp,lo;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&r);
            for(j=1; j<=r; j++)
            {
                scanf("%d",&strt[j]);
            }
            for(j=1; j<=r; j++)
            {
                for(k=1; k<r; k++)
                {
                    if(strt[k]>strt[k+1])
                    {
                        temp=strt[k];
                        strt[k]=strt[k+1];
                        strt[k+1]=temp;
                    }
                }
            }
            for(j=1; j<=r; j++)
            {
                dist=0;
                for(k=1; k<=r; k++)
                {
                    dist+=abs(strt[k]-strt[j]);
                }
                if(j==1)
                    min=dist;
                if(dist<min)
                    min=dist;
            }
            printf("%d\n",min);
        }
    }
    return 0;
}
