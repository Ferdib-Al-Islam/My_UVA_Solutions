#include<stdio.h>

int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if((a==1 && (b==0 && c==0)) || (a==0 && (b==1 && c==1)))
            printf("A\n");
        else if((b==1 && (c==0 && a==0)) || (b==0 && (c==1 && a==1)))
            printf("B\n");
        else if((c==1 && (a==0 && b==0)) || (c==0 && (a==1 && b==1)))
            printf("C\n");
        else printf("*\n");
    }
    return 0;
}
