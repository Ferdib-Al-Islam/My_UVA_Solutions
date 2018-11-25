#include<stdio.h>

int main()
{
    int a,b,count=0;
    char ch,c[201];
    while(scanf("%d%c%d=%s",&a,&ch,&b,c)==4)
    {
        if(ch=='+')
        {
            if(a+b==atoi(c))
            count++;
        }
        else if(ch=='-')
        {
            if(a-b==atoi(c))
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
