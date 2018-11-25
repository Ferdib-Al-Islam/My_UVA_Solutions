#include <stdio.h>

int main()
{
    int freq, amp, a, i, j, k, t;
    scanf("%d", &t);
    for(a=0; a<t; a++)
    {
        scanf(" %d %d", &amp, &freq);
        {
            for(i=0; i<freq; i++)
            {
                for(j=1; j<amp; j++)
                {
                    for(k=1; k<=j; k++)
                    {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                for(k=amp-1; j>=1; j--)
                {
                    for(k=1; k<=j; k++)
                    {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                if(i!=(freq-1))
                {
                    printf("\n");
                }
            }
            if(a!=(t-1))
            {
                printf("\n");
            }
        }
    }
    return 0;
}
