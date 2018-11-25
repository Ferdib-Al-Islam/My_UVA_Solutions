#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long c,len,i,s;
    char a[100];
    while(scanf("%s",&a))
    {
        s=0;
        len=strlen(a);
        for(i=0; i<len; i++)
        {
            c=a[i]-'0';
            s+=c*(pow(2,len-i)-1);
        }
        if(s==0)
            break;
        printf("%lld\n",s);
    }
    return 0;
}
