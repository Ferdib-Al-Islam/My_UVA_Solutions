#include<stdio.h>
#include<string.h>

int main ()
{
    long c, len, i, m, n, count, sum[202], x;
    char a[202],b[202],t[202];

    scanf("%ld", &c);

    while(c--)
    {
        for(i=0; i<202; i++)
            a[i]=b[i]=48;

        scanf("%s", t);
        len = strlen(t);

        while(t[len-1]=='0')
            len--;
        m=0;
        for(i=0; i<len; i++)
            a[m++]=t[i];

        scanf("%s", t);
        len = strlen(t);

        while(t[len-1]=='0')
            len--;
        n=0;
        for (i=0; i<len; i++)
            b[n++]=t[i];

        if(m>n)
            len=m;
        else
            len=n;

        count=x=0;
        for(i=0; i<len; i++)
        {
            count+=(a[i]-48) + (b[i]-48);
            sum[x++]=count%10;
            count/=10;
        }
        while(count !=0)
        {
            sum[x++]=count%10;
            count/=10;
        }
        i=0;
        while(sum[i]==0)
            i++;
        while(i<x)
            printf("%d", sum[i++]);
        printf("\n");
    }
    return 0;
}
