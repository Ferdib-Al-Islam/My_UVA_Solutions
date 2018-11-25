#include<stdio.h>
#define max 10000
#define min 10000

int fb[max][min];

void fibonacci()
{
    int i,j,k,sum;
    fb[0][0]=0;
    fb[1][0]=1;
    fb[2][0]=1;
    for(i=3; i<max; i++)
    {
        for(j=0; j<min; j++)
        {
            fb[i][j]+=fb[i-2][j]+fb[i-1][j];
            if(fb[i][j]>=10)
            {
                fb[i][j+1]+=fb[i][j]/10;
                fb[i][j]%=10;
            }
        }
    }
}

int main()
{
    fibonacci();
    int n,i,j,k,len;
    while(scanf("%d",&n)==1)
    {
        n=n+2;
        for(i=min-1; i>0; i--)
        {
            if(fb[n][i]!=0)
                break;
        }
        for(; i>=0; i--)
            printf("%d",fb[n][i]);
        printf("\n");
    }
    return 0;
}
