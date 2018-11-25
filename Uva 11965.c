#include<stdio.h>

int main ()
{
    int t;
    scanf("%d", &t);
    int cases=0, b=0, i, j;

    while(t--)
    {
        int n;
        scanf("%d", &n);
        getchar();

        if(b)
            printf("\n");

        b=1;

        printf("Case %d:\n", ++cases);

        for(i=0; i<n; i++)
        {
            char ch[505];
            gets(ch);
            int s=1;
            for(j=0; ch[j]; j++)
            {
                if(ch[j]==' ')
                {
                    if(s)
                        printf(" ");
                    s=0;
                }
                else
                {
                    s=1;
                    printf ("%c", ch[j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
