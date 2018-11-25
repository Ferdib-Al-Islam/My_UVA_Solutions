#include<stdio.h>
#include<string.h>

int a,b,c,len,i,j;

int palindrome(char input[])
{
    int k=1;
    len=strlen(input);
    for(i=0,j=len-1; i<len,j>=0; i++,j--)
    {
        if (input[i]==input[j] )
            continue;
        else
        {
            k=0;
            break;
        }
    }
    if(k==1)
        return 1;
    else
        return 0;
}

int mirrorstring(char input[])
{
    int k,a=1;
    len=strlen(input);
    for(i=0; i<len; i++)
    {
        if(input[i]=='E')
            input[i]='3';
        else if(input[i]=='J')
            input[i]='L';
        else if(input[i]=='0')
            input[i]='O';
        else if(input[i]=='S')
            input[i]='2';
        else if(input[i]=='Z')
            input[i]='5';
        else
            continue;
    }
    a=palindrome(input);
    if(a==1)
        return 1;
    else
        return 0;
}

int mirpalin(char input[])
{
    int k=0;
    len=strlen(input);
    for(i=0; i<len; i++)
    {
        if(input[i]=='A'||input[i]=='H'||input[i]=='I'||input[i]=='L'||input[i]=='M'||input[i]=='O'||input[i]=='T'||input[i]=='U'||input[i]=='V'||input[i]=='W'||input[i]=='X'||input[i]=='Y'||input[i]=='1'||input[i]=='8'||input[i]=='0')
            k++;
    }
    if(k==len)
        return 1;
    else
        return 0;
}

int main()
{
    char input[22];
    int pd,ms,mp;
    while(gets(input))
    {
        len=strlen(input);
        for(i=0; i<len; i++)
            printf("%c",input[i]);
        pd=palindrome(input);
        if(pd==1)
        {
            mp=mirpalin(input);
            if(mp==1)
                printf(" -- is a mirrored palindrome.\n\n");
            else
                printf(" -- is a regular palindrome.\n\n");
        }
        else
        {
            ms=mirrorstring(input);
            if(ms==1)
                printf(" -- is a mirrored string.\n\n");
            else
                printf(" -- is not a palindrome.\n\n");
        }
    }
    return 0;
}
