#include<stdio.h>

int main()
{
    int x,y,i,n,num;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        if((x-1)%(y-1)!=0)
        {
            puts("cannot do this");
        }
        else
        {
            num=(x-1)/(y-1);
            printf("%d\n", num);
        }
    }
    return 0;
}
