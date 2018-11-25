#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, count, l;
    char s[101];
    while(scanf("%d",&t)==1)
    {
        i=1; //case number print korar jonno 1 assign kore neya hoyese.
        while(i<=t)
        {
            gets(s);
            l=strlen(s);
            if(l==0)
                continue;
            count=0;
            for(j=0; j<l; j++)
            {
                switch(s[j])
                {
                case 'a':
                case 'd':
                case 'g':
                case 'j':
                case 'm':
                case 'p':
                case 't':
                case 'w':
                case ' ':
                    count=count+1;
                    break;
                case 'b':
                case 'e':
                case 'h':
                case 'k':
                case 'n':
                case 'q':
                case 'u':
                case 'x':
                    count=count+2;
                    break;
                case 'c':
                case 'f':
                case 'i':
                case 'l':
                case 'o':
                case 'r':
                case 'v':
                case 'y':
                    count=count+3;
                    break;
                case 's':
                case 'z':
                    count=count+4;
                    break;
                }
            }
            printf("Case #%d: %d\n",i,count);
            i++;
        }
    }
    return 0;
}
