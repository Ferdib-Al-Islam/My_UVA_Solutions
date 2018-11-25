#include<stdio.h>
#include<string.h>

int main()
{
    double a[40],sum=1;
    int i,n,k;
    for(i=1; i<=25; i++)
    {
        sum*=i;
        a[i]=sum;
    }
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int b[27]= {0};
        char str[50];
        scanf("%s",str);
        int len=strlen(str);
        for(k=0; k<len; k++)
            b[str[k]-65]++;
        sum=1;

        int r=0;
        for(k=0; k<26; k++)
            if(b[k]>1)
                sum*=a[b[k]];

        printf("Data set %d: %.0lf\n",i,a[len]/sum);
    }
    return 0;
}
