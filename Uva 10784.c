#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int i;
    double n,N;
    for(i=1; scanf("%lf",&n) && n; i++)
    {
        N = ceil((3+sqrt(9+8*n))/2);
        printf("Case %d: %.0lf\n",i,N);
    }
    exit(0);
}
