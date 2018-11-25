#include <stdio.h>
int main()
{
    static int n;
    while(scanf("%d", &n) && n)
    {
        printf("f91(%d) = %d\n", n, n < 102 ? 91 : n-10);
    }
    return 0;
}
