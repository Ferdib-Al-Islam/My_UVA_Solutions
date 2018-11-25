#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i, j, a[1001], count = 0, t;
    while(scanf("%d",&n)==1)
    {
        count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1; i<n; i++)
            for(j=n-1; j>=i; j--)
                if(a[j-1]>a[j])
                {
                    t=a[j-1];
                    a[j-1]=a[j];
                    a[j]=t;
                    count++;
                }
        printf("Minimum exchange operations : %d\n",count);
    }
    exit(0);
}
