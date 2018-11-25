#include<stdio.h>
#include<string.h>
int main()
{
    char str[6];
    int i=0;
    while(scanf("%s",str))
    {
        if(!strcmp(str,"*"))
            break;
        else if(!strcmp(str,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",++i);
        else
            printf("Case %d: Hajj-e-Asghar\n",++i);
    }
    return 0;
}

