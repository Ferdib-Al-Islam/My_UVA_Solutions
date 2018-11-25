#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,l,sum,n,prime,j;
    char c[50];
    while(gets(c))
    {
        sum=0;
        l=strlen(c);
        for(i=0; i<l; i++)
        {
            if(c[i]>='a'&&c[i]<='z')
            {
                n=toascii(c[i])-96; //26+96 = 122 (a-z)
                sum=sum+n;
            }
            else
            {
                n=toascii(c[i])-38; //52+38 = 90 (A-Z)
                sum=sum+n;
            }
        }
        prime=1;
        for(j=2; j<=sqrt(sum); j++)
        {
            if(sum%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1 || sum==1)
            printf("It is a prime word.\n");

        else if(prime==0)
            printf("It is not a prime word.\n");
    }
    return 0;
}
