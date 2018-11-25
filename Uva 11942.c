#include<stdio.h>
int main()
{
    int n,c,i,a[20],n1,n2;
    printf("Lumberjacks:\n");
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            for(i=0; i<10; i++)
            {
                scanf("%d",&a[i]);
            }
            n1=a[0];
            n2=a[1];

            if(n1>n2)
            {
                c=0;
                for(i=0; i<9; i++)
                {
                    if(a[i]>a[i+1])
                    {
                        c++;
                    }
                }
            }
            else if(n1<n2)
            {
                c=0;
                for(i=0; i<9; i++)
                {
                    if(a[i]<a[i+1])
                    {
                        c++;
                    }
                }
            }
            if(c==9)
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
    }
    return 0;
}
