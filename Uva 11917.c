#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,pd,i,rqd=0,tc=1,j,rd[110],chk=0;
    char s1[110][25];
    char s2[25];

    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {

            scanf("%s",s1[i]);
            scanf("%d",&rd[i]);
        }
        scanf("%d",&pd);
        scanf("%s",s2);
        for(i=0; i<n; i++)
        {
            if(!strcmp(s1[i],s2))
            {
                chk=1;
                rqd=rd[i];
                break;
            }
        }
        if(pd>=rqd && chk!=0)
            printf("Case %d: Yesss\n",tc++);
        else if(rqd > pd && rqd<=(pd+5) && chk!=0)
            printf("Case %d: Late\n",tc++);
        else if(chk==0)
            printf("Case %d: Do your own homework!\n",tc++);
        else
            printf("Case %d: Do your own homework!\n",tc++);
        rqd=0;
        chk=0;
    }
    return 0;
}
