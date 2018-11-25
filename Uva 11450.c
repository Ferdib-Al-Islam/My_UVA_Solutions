#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m, c, a[21][200]={};
        scanf("%d %d", &m, &c);
        int i, j, k, n[21], price[21][20];

        for(i=1; i<=c; i++)
        {
            scanf("%d", &n[i]);
            for(j=0; j<n[i]; j++)
                scanf("%d", &price[i][j]);
        }
        a[0][0]=1;
        for(i=1; i<=c; i++)
            for(j=0; j<n[i]; j++)
                for(k=price[i][j]; k<=m; k++)
                    a[i][k] += a[i-1][k-price[i][j]];
        int max=0;
        for(i=0; i<=m; i++)
            if(a[c][i])
                max=i;
        if(max)
            printf("%d\n", max);
        else
            printf("no solution\n");
    }
    return 0;
}
