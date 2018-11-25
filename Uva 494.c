#include<stdio.h>
int main()
{
    long i,count,b;
    char a[100000];
    while(gets(a))
    {
        count=0;
        b=1;
        for(i=0; a[i]; i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(b)
                    count++;
                b=0;
            }
            else
                b=1;
        }
        printf("%ld\n",count);
    }
    return 0;
}
