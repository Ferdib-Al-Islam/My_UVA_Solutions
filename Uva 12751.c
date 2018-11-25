#include <stdio.h>
int main()
{
    int t , i , n , k , x , s , r , c ;
    scanf("%d",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%d %d %d",&n,&k,&x);
        s=0,r=0;
        for(c=0; c<k ; c++)
        {
            r+=x ;
            x++;
        }
        s=.5*n*(n+1) ;
        printf("Case %d: %d\n",i,s-r);
    }
    return 0;
}
