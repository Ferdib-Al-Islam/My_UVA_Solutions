#include<stdio.h>
int main()
{
    int n,m,k,t,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        k=t=0;
        m=1;
        while(t==0)
        {
            int ch[200]= {0};
            ch[0]=0;
            ch[1]=1;
            while(ch[13]==0)
            {
                for(i=2; i<=n; i++)
                {
                    if(ch[i]==0)
                    {
                        k++;
                        if(k==m)
                        {
                            ch[i]=1;
                            k=0;
                        }
                    }
                    if(ch[13]==1)
                        break;
                }
            }
            for(i=1; i<=n; i++)
            {
                if(ch[i]==1)
                    t=1;
                else
                {
                    t=0;
                    m++;
                    break;
                }
            }
        }
        printf("%d\n",m);
    }
    return 0;
}
