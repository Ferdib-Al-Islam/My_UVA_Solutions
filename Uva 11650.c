#include<stdio.h>
int main()
{
    int t, hh, mm;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d:%d", &hh, &mm);
        hh=11-hh+(mm==0);
        if(hh <= 0)
            hh=hh+12;
        if(mm!=0)
            mm=60-mm;
        printf("%02d:%02d\n",hh,mm);
    }
    return 0;
}
