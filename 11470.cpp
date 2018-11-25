#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, arr[12][12], sum = 0, caseno = 0, s[6], i, j, p, q, t;

    while(scanf("%d", &n)==1 && n)
    {
        memset(s, 0, sizeof(s));
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        p=1, q=1;

        if(n%2 == 0)
            t=n/2;
        else
            t=n/2 + 1;

        int te = t;


        if(n%2==0)
        {
            while(t--)
            {
                for(i=p; i<=n; i++)
                {
                    s[q] += arr[p][i] + arr[n][i];
                }

                for(j=p+1; j<=n-1; j++)
                {
                    s[q] += arr[j][p] + arr[j][n];
                }

                p++, n--, q++;
            }

        }
        else
        {
            t--;
            while(t--)
            {
                for(i=p; i<=n; i++)
                {
                    s[q] += arr[p][i] + arr[n][i];
                }

                for(j=p+1; j<=n-1; j++)
                {
                    s[q] += arr[j][p] + arr[j][n];
                }

                p++, n--, q++;
            }
            s[q]=arr[te][te];

        }
        printf("Case %d: ",++caseno);

        for(i=1; i<=te; i++)
        {
            printf("%d",s[i]);
            if(i<te)
            printf(" ");

        }
        printf("\n");
    }

    return 0;
}


