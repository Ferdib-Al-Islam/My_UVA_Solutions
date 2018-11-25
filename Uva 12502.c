#include<stdio.h>

int main()
{
    int x,y,z,t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        i=z*(x+(x-y))/(x+y);
        printf("%d\n",i);
    }
    return 0;
}
