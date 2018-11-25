#include<stdio.h>

int main()
{
    int t, M, a, b, c[1000010], k, i;
    scanf("%d", &t);

    for(k=0; k<t; k++)
    {
        if (k>0)
            printf("\n");

        scanf("%d", &M);
        for (i=0; i<M; i++)
        {
            scanf("%d %d", &a, &b);
            c[i]=a+b;
        }
        for(i=M-1; i>0; i--)
        {
            if(c[i]>=10)
            {
                c[i-1] += c[i]/10;
                c[i]%=10;
            }
        }
        for(i=0; i<M; i++)
        {
            printf("%d", c[i]);
        }
        printf("\n");
    }
    return 0;
}
