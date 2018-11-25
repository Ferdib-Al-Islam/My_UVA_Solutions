#include<stdio.h>

int main()
{
    int n,i,count;
    while(scanf("%d",&n)==1)
    {
        count=0;
        for(i=n+1; i<=2*n; i++)
            if((i*n)%(i-n)==0)
                count++;
        printf("%d\n",count);
        for(i=n+1; i<=2*n; i++)
            if((i*n)%(i-n)==0)
                printf("%d/%d = %d/%d + %d/%d\n",1,n,1,(i*n)/(i-n),1,i);
    }
    return 0;
}
