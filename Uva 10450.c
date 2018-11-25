#include <stdio.h>
int main()
{
    long long n[500]= {0};
   // n[0]=0;
    n[1]=2;
    n[2]=3;
    int t,d=0,j;
    for(j=3; j<=55; j++)
        n[j]=n[j-2]+n[j-1];
    scanf("%d",&t);
    while(t--)
    {
        d++;
        int k,i;
        scanf("%d",&i);
        printf("Scenario #%d:\n%lld\n\n",d,n[i]);
    }
    return 0;
}
