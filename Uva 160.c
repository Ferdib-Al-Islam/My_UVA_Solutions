#include<stdio.h>

int main()
{
    long n, i, s, count, j, t;
    long b[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    while(scanf("%ld", &n))
    {
        if (n==0)
           break;
        t=n;
        long a[25]={0};

        while(n != 1)
        {
            i=n;
            j=0;
            while(i>1)
            {
                count=0;
                while(i%b[j]==0)
                {
                    i/=b[j];
                    count++;
                }
                a[j]+=count;
                j++;
            }
            n--;
        }

        for(i=24; i>=0; i--)
        {
            if(a[i] != 0)
                break;
        }
        j=i;

        printf("%3ld! =", t);
        if(j>=15)
            s=0;
        else
            s=15;
        for(i=0; i<=j; i++)
        {
            printf("%3ld", a[i]);
            s++;
            if(s==15)
                printf("\n%6c",' ');
        }
        printf("\n");
    }
    return 0;
}
