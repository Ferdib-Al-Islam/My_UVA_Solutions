#include<stdio.h>
int main()
{
    unsigned long n;
    int i,count,b[1000];
    while(scanf("%lu",&n)==1)
    {
        if(n==0)
            break;
        i=0;
        while(n!=0)
        {
            b[i]=n%2;
            n/=2;
            i++;
        }
        count=0;
        printf("The parity of ");
        for(i=i-1; i>=0; i--)
        {
            printf("%d",b[i]);
            if(b[i]==1)
                count++;
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
