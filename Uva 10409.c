#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char side[7];
    int north,south,east,west,top,bottom,top2,bottom2;
    while((scanf("%d",&n)==1) && n)
    {
        top=1;
        bottom=6;
        east=4;
        west=3;
        north=2;
        south=5;

        while(n--)
        {
            scanf("%s",&side);
            if(strcmp(side, "north")==0)
            {
                bottom2=bottom;
                top2=top;
                top=south;
                bottom=north;
                south=bottom2;
                north=top2;
            }
            else if(strcmp(side, "south")==0)
            {
                bottom2=bottom;
                top2=top;
                top=north;
                bottom=south;
                south=top2;
                north=bottom2;
            }
            else if(strcmp(side, "east") == 0)
            {
                bottom2=bottom;
                top2=top;
                top=west;
                bottom=east;
                west=bottom2;
                east=top2;
            }
            else if(strcmp(side, "west") == 0)
            {
                bottom2=bottom;
                top2=top;
                top=east;
                bottom=west;
                east=bottom2;
                west=top2;
            }
        }
        printf("%d\n",top);
    }
    return 0;
}
