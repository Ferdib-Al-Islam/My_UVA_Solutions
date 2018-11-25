#include<stdio.h>

int main ()
{
    int m, n;
    int a, b, c, d, e, f;

    while(1)
    {
        scanf("%d %d", &m, &n);
        if(m==1 && n==1)
            break;
        a=0, b=1, c=1, d=0;
        e=1, f=1;
        while(1)
        {
            if(e==m && f==n)
                break;
            if(e*n > f*m)
            {
                printf("L");
                b=e, d=f;
            }
            else
            {
                printf("R");
                a=e, c=f;
            }
            e=a+b;
            f=c+d;
        }
        printf("\n");
    }
    return 0;
}
