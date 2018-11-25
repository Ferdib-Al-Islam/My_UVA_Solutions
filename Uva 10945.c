#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char ch[10000], pal[10000];
    int a=0, z, len, r, i;
    while(scanf("%c", &ch[0])==1)
    {
        r=1;
        len=0;
        for(a=1; ; a++)
        {
            scanf("%c", &ch[a]);
            if(ch[a]=='\n')
            {
                ch[a]=' ';
                break;
            }
        }
        if(!(strcmp(ch, "DONE")))
            break;

        for(a=0, i=0; ch[a]!=' '; a++)
        {
            ch[a]=toupper(ch[a]);
            if(ch[a]>='A' && ch[a]<='Z')
            {
                pal[i]=ch[a];
                i++;
                len++;
            }
        }
        pal[i]=' ';
        len=len-1;

        for(a=0; a<len; a++)
        {
            if(pal[a]!=pal[len-a])
                r=0;
        }
        if(r==1)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }
    return 0;
}
