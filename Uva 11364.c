#include<stdio.h>

int main ()
{
    int t, n, i, a[100000], max , j, min , x;

    scanf ("%d",&t) ;
    for(i=1; i<=t; i++)
    {
        max=0 ;
        min=99 ;
        scanf("%d",&n) ;

        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]) ;
            if(max<=a[j])
                max=a[j] ;
            if(min>=a[j])
                min=a[j] ;
        }
        x= max-min ;
        printf("%d\n",x*2) ;
    }
    return 0 ;
}
