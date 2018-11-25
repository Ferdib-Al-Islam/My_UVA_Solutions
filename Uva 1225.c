#include <stdio.h>
char str[100000];
int main()
{
    int t,n,b,i;
    scanf("%d",&t);
    while(t--)
    {
        int a[11]={0},j=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            b=i;
            while(b>0)
            {
                str[j++]=(b%10)+48;
                b=b/10;
            }
        }
        for(i=0; i<j; i++)
            a[str[i]-48]++;
        for(i=0; i<10; i++)
        {
            printf("%d",a[i]);
            if(i!=9)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
