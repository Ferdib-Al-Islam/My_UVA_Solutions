#include <cstdio>
#include <stack>

#define max 50

using namespace std;

int pred(char c)
{
    int p = 0;
    switch(c)
    {
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void post(char* i)
{
    char c, d;
    stack<char> st;
    for ( ; *i; i++)
    {
        c = *i;
        if (c >= '0' && c <= '9')
            putchar(c);
        else if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            d = st.top();
            st.pop();
            while (d != '(')
            {
                putchar(d);
                d = st.top();
                st.pop();
            }
        }
        else
        {
            if (st.empty())
                st.push(c);
            else
            {
                while (!st.empty() &&
                        pred(st.top()) >= pred(c))
                {
                    putchar(st.top());
                    st.pop();
                }
                st.push(c);
            }
        }
    }
    while (!st.empty())
    {
        putchar(st.top());
        st.pop();
    }
    putchar('\n');
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    getchar();
    while (t--)
    {
        char c, s[max + 1];
        char* ps = s;
        while ((c = getchar()) != EOF && c != '\n')
        {
            *ps++ = c;
            getchar();
        }
        *ps = '\0';
        post(s);
        if (t)
            putchar('\n');
    }

    return 0;
}
