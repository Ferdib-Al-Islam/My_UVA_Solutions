#include<stdio.h>
#include<string.h>
int main()
{
    long tc,n;
    scanf("%ld",&tc);
    char s[650], k=0;

    for(n=1; n<=tc; n++)
    {
        scanf("%s", &s[k]);
        int j,len,m=0,a=0,r=0,g=0,i=0,t=0,str=650;
        len=strlen(s);
        for(j=0; j<len; j++)
        {
            if(s[j]=='M')
                m++;
            else if(s[j]=='A')
                a++;
            else if(s[j]=='R')
                r++;
            else if(s[j]=='G')
                g++;
            else if(s[j]=='I')
                i++;
            else if(s[j]=='T')
                t++;
        }
        a=a/3;
        r=r/2;
        if(m<str)
            str=m;
        if(a<str)
            str=a;
        if(r<str)
            str=r;
        if(g<str)
            str=g;
        if(i<str)
            str=i;
        if(t<str)
            str=t;

        printf("%d\n",str);
    }
    return 0;
}
