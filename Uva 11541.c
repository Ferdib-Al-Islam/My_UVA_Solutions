#include <stdio.h>
#include <ctype.h>
#define MAX 201
int main()
{
    static int T, t, i, j, k, K, f;
    static char c,d, S[MAX], R[MAX];

    scanf("%d\n", &T);
    for(t = 1; t <= T; t++)
    {
        scanf("%s", S);
        for(i = 0, f = k = K = 0; (c = S[i]) != '\0'; i++)
        {
            if(isalpha(c))
            {
                if(f == 2)
                {
                    for(j = 0; j < k; j++)
                        R[K++] = d;
                    k = 0;
                }
                f = 1;
                d = c;
            }
            else
            {
                k = k*10+(c-'0');
                f = 2;
            }
        }
        if(k)
            for(j = 0; j < k; j++)
                R[K++] = d;
        R[K] = '\0';
        printf("Case %d: %s\n", t, R);
    }
    return 0;
}
