#include<stdio.h>
char stack[200];
char ch;
int top=-1;
push(char c)
{
    stack[++top]=c;
}
pop()
{
    top--;
}
int check(char a,char b)
{
    if(a=='('&&b==')')
        return 1;
    else if(a=='['&&b==']')
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf(" ");
        while(ch=(getchar()!='\n'))
        {
            if(ch=='('||ch=='[')
            {
                push(ch);
            }
            else if(ch==')'||ch==']')
            {
                if(check(stack[top],ch))
                    pop();
                else
                    push(ch);
            }
        }
        if(stack[top]==-1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}

