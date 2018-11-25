#include<stdio.h>

int main()
{
    double l,w,d,wg,a,b,c;
    int n,m,i,j,k;
    scanf("%d",&n);
    k=0;
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&wg);
        if(((l<=56 && w<=45 && d<=25)||(l+w+d<=125)) && wg<=7)
        {
            printf("1\n");
            k++;
        }
        else
            printf("0\n");
    }
    printf("%d\n",k);
    return 0;
}
