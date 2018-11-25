#include<stdio.h>
#include<string.h>
int main()
{
    char year[1000000];
    int a,b,c,h,bk,i,l,count=0;
    while(scanf("%s",&year)==1)
    {
        a=0;
        b=0;
        h=0;
        bk=0;
        c=0;
        if (count>0)
            printf("\n");
        count++;
        l=strlen(year);
        for(i=0; i<l; i++)
        {
            a=(a*10+year[i]-'0')%4;
            bk=(bk*10+year[i]-'0')%55;
            h=(h*10+year[i]-'0')%15;
            b=(b*10+year[i]-'0')%100;
            c=(c*10+year[i]-'0')%400;
        }
        if((!a && b) || !c)
        {
            printf("This is leap year.\n");
            if (!h)
                printf("This is huluculu festival year.\n");
            if (!bk)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if (!h)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
