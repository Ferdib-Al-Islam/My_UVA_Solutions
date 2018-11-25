#include <stdio.h>
#include <math.h>
int main()
{
    double n, P;
    while(scanf("%lf %lf", &n, &P) == 2)
        printf("%.lf\n", pow(P, 1/n));
    return 0;
}
