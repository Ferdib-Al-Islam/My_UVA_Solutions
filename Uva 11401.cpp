#include<stdio.h>

long long i, triangles[1000001];
int main()
{
    triangles[3]=0;
    for(i=4; i<1000001; i++)
        if((i%2))
            triangles[i]=(i-1)*(i-3)/4 + triangles[i-1];
        else
            triangles[i]=(i-2)*(i-2)/4 + triangles[i-1];

    while(scanf("%lld", &i)==1 && i>2)
        printf("%lld\n",triangles[i]);

    return 0;
}
