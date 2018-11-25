#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[9999];
    int n,i,len;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",str);
        i=atoi(str);
        len=strlen(str);
        if(i==1 || i==4 || i==78)
            printf("+\n");
        else if(str[len-1]==(5+'0')&&str[len-2]==(3+'0'))
            printf("-\n");
        else if(str[len-1]==(4+'0')&&str[0]==(9+'0'))
            printf("*\n");
        else
            printf("?\n");
    }
    return 0;
}
