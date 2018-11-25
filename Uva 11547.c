#include <stdio.h>
int main()
{
    int n, T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        n = (n*63+7492)*5-498;
        printf("%d\n", n < 0 ? (-n/10)%10 : (n/10)%10);
    }
    return 0;
}
