#include<stdio.h>

int main()
{
    int line,y,n,x=0;

    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
        x++;
        line=1;
        y=0;
        while(line<n)
        {
            line+=line;
            y++;
        }
        printf("Case %d: %d\n",x,y);
    }
    return 0;
}
