#include <stdio.h>

int main()
{
    int t, d, n,j,i;
    for(j=0; j<10; j++)
    {
        scanf("%d", &n);
        {
            if(n==0)
                break;
            d=0;
            for(i=0; ; i++)
            {
                d+=n/3;
                n=(n/3)+(n%3);
                if(n==2)
                    n+=1;
                if(n==1)
                    break;
            }
            printf("%d\n", d);
        }
    }
    return 0;
}
