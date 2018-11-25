#include<stdio.h>

int fb[5001][1001];

void fib()
{
    long a,i,j,k;
    fb[0][1000]=0;
    fb[1][1000]=fb[2][1000]=1;
    for(i=3; i<5000; i++)
    {
        for(j=1000; j>=0; j--)
        {
            fb[i][j] += fb[i-1][j]+fb[i-2][j];

            if(fb[i][j]>9)
            {
                fb[i][j-1] += (fb[i][j]/10);
                fb[i][j]=fb[i][j]%10;
            }
        }
    }
}

int main()
{
    int a,i,j;
    fib();

    while(scanf("%d", &a)==1)
    {
        for(i=0; ; i++)
        {
            if(fb[a][i]!=0)
                break;
        }

        for(j=i; j<=1000; j++)
        {
            printf("%d", fb[a][j]);
        }
        printf("\n");
    }
    return 0;
}
