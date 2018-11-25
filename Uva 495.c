#include <stdio.h>

int fib[5001][1000]= {0};

int main()
{
    int i,j;
    fib[1][0]=1;
    for(i=2; i<=5000; i++)
    {
        for(j=0; j<1000; j++)
        {
            fib[i][j] += fib[i-1][j]+fib[i-2][j];
            if(fib[i][j]>=1000)
            {
                fib[i][j] -= 1000;
                fib[i][j+1]++;
            }
        }
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("The Fibonacci number for %d is ",n);
        if(!n)
            printf("0\n");
        else
        {
            int i=1000;
            while(fib[n][i--]==0);
            printf("%d",fib[n][i--]);
            for(; i>=0; i--)
            printf("%d",fib[n][i]);
            printf("\n");
        }
    }
    return 0;
}
