#include<stdio.h>
int ab[10000000];

int main()
{
    int i, a, b, c, s, temp;
    while (scanf("%d %d",&a,&b)==2)
    {
        if(!a && !b)
            return 0;
        c=0;

        for(i=0; i<a; i++)
        {
            scanf("%d",&ab[i]);
        }
        for(i=0,s=0; i<b; i++)
        {
            scanf("%d",&temp);
            for (; temp>=ab[s] && s<a; s++)
            {
                if (ab[s] == temp)
                {
                    c++;
                    break;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
