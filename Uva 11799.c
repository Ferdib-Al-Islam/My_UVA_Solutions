#include<stdio.h>

int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        int i,m,max,a;
        scanf("%d",&m);
        scanf("%d",&a);
        max=a;
        for(i=2; i<=m; i++)
        {
            scanf("%d",&a);
            if(a>max)
                max=a;
        }
        printf("Case %d: %d\n",j,max);
    }
    return 0;
}
