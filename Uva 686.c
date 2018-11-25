#include<stdio.h>
#include<math.h>

int main()
{
    long n,i,j,d,c,a,b,p,q,r;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        r=0;
        for(i=3; i!=0; i+=2)
        {
            d=1;
            c=1;
            a=i;
            b=n-i;
            if(a>b)
                break;
            if(a%2!=0)
            {
                p=(int)sqrt(a);
                for(j=3; j<=p; j+=2)
                {
                    if(a%j==0)
                    {
                        d=0;
                        break;
                    }
                }
                if(d==1)
                {
                    if(b%2!=0)
                    {
                        q=(int)sqrt(b);
                        for(j=3; j<=q; j+=2)
                        {
                            if(b%j==0)
                            {
                                c=0;
                                break;
                            }
                        }
                        if(c==1)
                            r++;
                    }
                }
            }
        }
        if(n==4)
            printf("1\n");
        else
            printf("%ld\n",r);

    }
    return 0;
}
