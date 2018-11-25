#include<stdio.h>
int main()
{
    int count,n;
    while(scanf("%d",&n)==1)
    {
        count=n;
        while(n>=3)
        {
            count=count+(n/3);
            n=(n/3)+(n%3);
        }
        if(n==2)
        {
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
