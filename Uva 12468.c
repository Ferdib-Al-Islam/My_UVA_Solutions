#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0,y=0,c=0;
    while((scanf("%d %d",&x,&y))==2)
    {
        if(x==-1 && y==-1)
            break;

        c=abs(y-x);

        if(c>50)
            c=100-c;
        printf("%d\n",c);
    }
    return 0;
}
