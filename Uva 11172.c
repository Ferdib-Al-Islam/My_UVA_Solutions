#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,t;
    long a, b;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }
    exit(0);
}
