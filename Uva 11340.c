#include<stdio.h>
#include<string.h>

int main()
{
    long tc,c,val,line,i,j,k,len,n[200];
    double price;
    char str[10000],x[200];

    while(scanf("%ld\n",&tc)==1)
    {
        for(k=1; k<=tc; k++)
        {
            price=0;
            scanf("%ld\n",&val);
            for(j=1; j<=val; j++)
            {
                scanf("%c%ld\n",&x[j],&n[j]);
            }
            scanf("%ld\n",&line);
            for(j=1; j<=line; j++)
            {
                gets(str);
                len=strlen(str);
                for(i=1; i<=val; i++)
                {
                    for(c=0; c<len; c++)
                    {
                        if(x[i]==str[c])
                            price+=n[i];
                    }
                }
            }
            printf("%.2lf$\n",price/100);
        }
    }
    return 0;
}
