#include<stdio.h>
#include<string.h>

char a[31], b[31];
unsigned int t,i,k,p,x,y;
char lena, lenb, temp;

unsigned int gcd(unsigned int a, unsigned int b)
{
    if(a)
        return gcd(b%a,a);
    return b;
}

int main()
{
    scanf("%u\n",&t);

    for(i=0; i != t; )
    {
        i++;
        gets(a);
        gets(b);

        for(x=0,p=1,temp=strlen(a); temp; temp--)
            x+= p*(a[temp-1]-'0'),p*=2;

        for(y=0,p=1,temp=strlen(b); temp; temp--)
            y += p*(b[temp-1]-'0'),p*=2;

        if(y>x)
            k=gcd(x,y);
        else
            k=gcd(y,x);

        if(k!=1)
            printf("Pair #%u: All you need is love!\n",i);
        else
            printf("Pair #%u: Love is not all you need!\n",i);
    }
    return 0;
}
