#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,e,d,p,r;
    char s[1000];

    while(gets(s))
    {
        e=0;
        d=0;
        if((int)s[0]>=48 && (int)s[0]<=57)
            d=1;
        else
            e=1;
        if(e==1)
        {
            i=strlen(s);
            for(j=i-1; j>=0; j--)
            {
                k=(int)s[j];
                while(k>=10)
                {
                    p=k%10;
                    k=k/10;
                    printf("%d",p);
                }
                printf("%d",k);
            }
            printf("\n");
        }
        else if(d==1)
        {
            i=strlen(s);
            r=0;
            for(j=i-1; j>=0; j--)
            {
                if( !(r>=65 && r<=90) && !(r>=97 && r<=122) && r!=32 && r!=33 && r!=44 && r!=46 && r!=58 && r !=59 && r!=63 )
                {
                    r=(r*10)+(int)s[j]-48;
                }
                else
                {
                    printf("%c",r);
                    r=(int)s[j]-48;
                }

            }
            printf("%c",r);
            printf("\n");
        }
    }
    return 0;
}
