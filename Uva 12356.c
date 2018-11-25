#include<stdio.h>
int left[100010], right[100010];
int main()
{
    int s, b, i;
    while(scanf("%d %d", &s, &b), s||b)
    {
        for(i=1;i<=s;i++)
        {
            left[i] = i - 1;
            right[i] = i + 1;
        }
        right[s]=-1;
        left[1]=-1;
        int l, r;
        for(i=0; i<b; i++)
        {
            scanf("%d %d", &l, &r);
            left[right[r]] = left[l];
            if (left[l] != -1)
                printf("%d", left[l]);
            else
                printf("*");
            right[left[l]] = right[r];
            if (right[r] != -1)
                printf(" %d\n", right[r]);
            else
                printf(" *\n");
        }
        printf("-\n");
    }
    return 0;
}
