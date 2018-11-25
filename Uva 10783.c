#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,i,sum=0,t,n,c;
    scanf("%d", &n);
    if(1<=n && n<=100)
        for(t=0,c=1; t<n; t++,c++)
        {
            scanf("%d\n%d",&a,&b);
            i=a;
            if(i%2==0)
            {
                i=i+1;
            }
            else
            {
                i=i;
            }
            if(0<=a && a<=b && b<=100)
            {
                while(i<=b)
                {
                    sum=sum+i;
                    i+=2;
                }
                printf("Case %d: %d\n",c,sum);
                sum=0;
            }
        }
    exit(0);
}



