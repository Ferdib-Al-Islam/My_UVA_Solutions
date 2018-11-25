#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int x,y,d,count,start,flag;

        scanf("%d %d", &x, &y);

        d=y-x;
        count=0;
        start=1;
        flag=0;

        while(d>0)
        {
            d-=start;
            count++;
            if(flag)
                start++;
            flag=!flag;
        }
        printf("%d\n", count);
    }
    return 0;
}
