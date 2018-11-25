#include <stdio.h>
#define N 101
unsigned int a[N][N];
unsigned int ways(int n,int k)
{
    if(n<0||k<0)
        return 0;
    if(a[n][k]!=-1)
        return a[n][k];
    else
    {
        int i;
        unsigned int x = 0;
        for(i=0; i<=n; i++)
            x+=(ways(n-i,k-1)%1000000);
        return a[n][k]=x%1000000;
    }
}
int main()
{
    int i,j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            a[i][j]=-1;
        }
    }
    a[0][0]=1;
    while(scanf("%d %d",&i,&j)==2&&i)
        printf("%u\n",ways(i,j));
    return 0;
}
