#include <stdio.h>
int main()
{
    int n,i,j,k,l,m,p,count=0;
    int lotto[15];
    while(scanf("%d", &n) && n != 0)
    {
        if(count != 0)
        {
            printf("\n");
        }
        count++;
        for(i=0 ; i<n ; i++)
        {
            scanf("%d", &lotto[i]);
        }
        for(i=0 ; i<n ; i++)
        {
            for(j=i+1 ; j<n ; j++)
            {
                for(k=j+1 ; k<n ; k++)
                {
                    for(l =k+1 ; l<n ; l++)
                    {
                        for(m =l+1 ; m<n ; m++)
                        {
                            for(p=m+1 ; p<n ; p++)
                            {
                                printf("%d %d %d %d %d %d\n", lotto[i], lotto[j], lotto[k], lotto[l], lotto[m], lotto[p]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
