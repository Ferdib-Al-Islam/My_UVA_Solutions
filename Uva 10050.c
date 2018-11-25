#include<stdio.h>

int main()
{
    int day[5000];
    int test,party[150],np,ht[150],i,j,k,nd,l,count;
    scanf("%d",&test);

    for(i=0; i<test; i++)
    {
        count=0;
        scanf("%d",&nd);
        scanf("%d",&np);
        for(j=0; j<np; j++)
            scanf("%d",&ht[j]);
        for(l=0; l<np; l++)
        {
            for(k=1; k<=nd; k++)
            {
                if(k%ht[l]==0)
                    day[k-1]=1;
            }
        }
        for(k=1; k<=nd; k++)
        {
            if(k%7==0 || k%7==6)
                day[k-1]=0;
        }
        for(k=1; k<=nd; k++)
        {
            if(day[k-1]==1)
                count++;
            day[k-1]=0;
        }
        printf("%d\n",count);
    }
    return 0;
}
