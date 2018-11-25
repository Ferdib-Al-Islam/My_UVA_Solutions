#include<stdio.h>

int main()
{
    int n, x, y, h, k, i;

    while(scanf("%d",&n)&&n)
    {
        scanf("%d%d",&h,&k);

        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            x -= h,y -= k;

            if(x*y==0)
                printf("divisa\n");
            else if(x>0 && y>0)
                printf("NE\n");
            else if(x>0 && y<0)
                printf("SE\n");
            else if(x<0 && y>0)
                printf("NO\n");
            else
                printf("SO\n");
        }
    }
    return 0;
}
