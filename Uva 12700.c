#include <stdio.h>

int main()
{
    int n=0,c=1;
    scanf("%d",&n);
    while(n--)
    {
        int m=0,i=0;
        scanf("%d",&m);
        char str[100];
        scanf("%s",str);
        int A=0,B=0,T=0,W=0;
        for(i=0; i<m; i++)
        {
            if(str[i]=='A')
                A++;
            else if(str[i]=='B')
                B++;
            else if(str[i]=='T')
                T++;
            else if(str[i]=='W')
                W++;
        }
        if((B+A==m)&& B!=0)
            printf("Case %d: BANGLAWASH\n",c);
        else if((W+A==m) && W!=0)
            printf("Case %d: WHITEWASH\n",c);
        else if(A==m)
            printf("Case %d: ABANDONED\n",c);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",c,B,W);
        else if(B<W)
            printf("Case %d: WWW %d - %d\n",c,W,B);
        else if(B==W)
            printf("Case %d: DRAW %d %d\n",c,B,T);
        c++;
    }
    return 0;
}
