#include<stdio.h>

int main()
{
    long s,d,i,n;
    while(scanf("%ld %ld",&s,&d)==2)
    {
        n=0;
        for(i=s ;; i++)
        {
            n=n+i;
            if(n>d || n==d)
            {
                printf("%ld\n",i);
                break;
            }
        }
    }
    return 0;
}

/*
 long find(long x,long y,long size)
 {
    if(x>=size)
        return y;
    return find(x+y,++y,size);
}

int main()
{
    long x,y;
    while((scanf("%ld %ld",&x,&y))==2)
    {
        long size=find(x,x,y);
        printf("%ld\n",size);
    }
    return 0;
}    */
