#include<stdio.h>
#include<math.h>
#define max 1000000

int x[1000001];

int output()
{
    int i;
    x[0]=1;

    for(i=1; i<=max; i++)
    {
        x[i]=x[(int)floor(i-sqrt(i))]+x[(int)floor(log(i))]+x[(int)floor(i*sin(i)*sin(i))];
        x[i]%=max;
    }
}

int main()
{
    output();
    int a,b,c,d,i;

    while(scanf("%d",&i)==1)
    {
        if(i==-1)
            break;
        printf("%d\n",x[i]);
    }
    return 0;
}
