#include<stdio.h>

int main()
{
    int d1, m1, y1, d2, m2, y2, age, i, j, t;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d/%d/%d",&d1, &m1, &y1);
            scanf( "%d/%d/%d",&d2, &m2, &y2);
            age=(y1-y2);
            if(m1<m2)
                age--;
            else if(m1==m2)
            {
                if(d1<d2)
                    age--;
            }
            if(age<0)
                printf("Case #%d: Invalid birth date\n", i );
            else if(age>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n",i,age);
        }
    }
    return(0);
}
