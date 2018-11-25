#include<stdio.h>
#include<string.h>

int main()
{
    char s[100010];
    while(gets(s))
    {
        int c=0, i, j;
        for(i=0; s[i]!='\0'; i++)
        {
            switch(s[i])
            {
            case 'b':
            {
                for(j=0; j<c; j++)
                    printf(" ");
                c=0;
                break;
            }
            case '1':
                c=c+1;
                break;
            case '2':
                c=c+2;
                break;
            case '3':
                c=c+3;
                break;
            case '4':
                c=c+4;
                break;
            case '5':
                c=c+5;
                break;
            case '6':
                c=c+6;
                break;
            case '7':
                c=c+7;
                break;
            case '8':
                c=c+8;
                break;
            case '9':
                c=c+9;
                break;
            case '!':
                printf("\n");
            default:
            {
                for(j=0; j<c; j++)
                    printf("%c",s[i]);
                c=0;
                break;
            }
            }
        }
        printf("\n");
    }
    return 0;
}
