#include<stdio.h>
int main()
{
    int n,k,p,t,s,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&n,&k,&p);
            s=k+p;
            while(s>n)
            {
                s-=n;
            }
            printf("Case %d: %d\n",i,s);
        }
    }
    return 0;
}
