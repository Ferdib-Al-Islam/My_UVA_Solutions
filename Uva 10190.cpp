#include<stdio.h>

int main()
{
    long long i, j, max, t1, t2, num1, num2;
    long long arr[10000];

    while(scanf("%lld %lld", &t1, &t2)==2)
    {
        max=0;
        num1=t1;
        num2=t2;

        if(num1<num2 || num1<2 || num2<2)
            printf("Boring!\n");
        else
            for(i=1; ; i++)
            {
                if(num1==1)
                {
                    arr[max]=1;
                    for(j=0; j<max; j++)
                        printf("%lld ",arr[j]);
                    printf("%lld\n", arr[max]);
                    break;
                }
                else if(num1%num2==0)
                {
                    arr[max]=num1;
                    max++;
                    num1=num1/num2;
                }
                else
                {
                    printf("Boring!\n");
                    break;
                }
            }
    }
    return 0;
}
