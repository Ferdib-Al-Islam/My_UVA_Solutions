#include<stdio.h>

int main()
{
    int n,e,f,c,a,t,total,i;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&e,&f,&c);
            t=0;
            total=e+f;
            while(total>=c)
            {
                a=total/c;
                t=t+a;
                total=a+(total%c);
            }
            printf("%d\n",t);
        }
    }
    return 0;
}
