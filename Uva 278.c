#include<stdio.h>

int main()
{
    int n,a,b,i,min;
    char ch;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%c %d %d",&ch,&a,&b);
        getchar();
        if(ch=='Q' || ch== 'r')
        {
            if(a>=b)
                min=b;
            else
                min=a;
            printf("%d\n",min);
        }
        else if(ch=='K')
        {
            if(a%2==0 && b%2==0)
                printf("%d\n",((a/2)*(b/2)));
            else if(a%2==0 && b%2==1)
                printf("%d\n",((a/2)*((b+1)/2)));
            else
                printf("%d\n",(((a+1)/2)*((b+1)/2)));

        }
        else
        {
            if(a%2==0 && b%2==0)
                printf("%d\n",(a/2)*b);
            else if(a%2==1 && b%2==0)
                printf("%d\n",(b/2)*a);
            else if(a%2==0 && b%2==1)
                printf("%d\n",(a/2)*b);
            else
            {
                if(a%3==0)
                    printf("%d\n",(a/3)*b);
                else
                    printf("%d\n",((a/3)+1)*b);
            }
        }

    }
    return 0;
}
