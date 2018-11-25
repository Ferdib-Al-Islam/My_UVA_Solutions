#include<stdio.h>
#include<math.h>

int main()
{
    int test, count=0;
    double u, v, a, s, t;
    while(scanf("%d", &test)==1)
    {
        if(test==0)
            break;
        count++;

        switch(test)
        {
        case 1:
            scanf(" %lf %lf %lf", &u, &v, &t);
            a=(v-u)/t;
            s=((v+u)/2)*t;
            printf("Case %d: %.3lf %.3lf\n", count, s, a);
            break;
        case 2:
            scanf(" %lf %lf %lf\n", &u, &v, &a);
            t=((v-u)/a);
            s=((v+u)/2)*t;
            printf("Case %d: %.3lf %.3lf\n", count, s, t);
            break;
        case 3:
            scanf(" %lf %lf %lf", &u, &a, &s);
            v=sqrt((u*u)+2*a*s);
            t=((v-u)/a);
            printf("Case %d: %.3lf %.3lf\n", count, v, t);
            break;
        case 4:
            scanf(" %lf %lf %lf", &v, &a, &s);
            u=sqrt((v*v)-2*a*s);
            t=((v-u)/a);
            printf("Case %d: %.3lf %.3lf\n", count, u, t);
            break;
        }
    }
    return 0;
}

