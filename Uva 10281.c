#include<stdio.h>
#include<string.h>

int main()
{
    char str[40];
    int ph=0, pm=0, ps=0, psd=0;
    int h, m, s, speed;
    double result=0;

    while(gets(str))
    {
        int len=strlen(str);
        if(len==8)
        {
            sscanf(str,"%d:%d:%d",&h,&m,&s);
            result += ((h*3600 + m*60 + s) - (ph*3600 + pm*60 + ps)) * (double)psd/3600.0;
            ph=h;
            pm=m;
            ps=s;
            printf("%d%d:%d%d:%d%d %.2lf km\n", h/10, h%10, m/10, m%10, s/10, s%10, result);
        }
        else
        {
            sscanf(str,"%d:%d:%d %d",&h,&m,&s,&speed);
            result += ((h*3600 + m*60 + s) - (ph*3600 + pm*60 + ps)) * psd/3600.0;
            ph=h;
            pm=m;
            ps=s;
            psd=speed;
        }
    }
    return 0;
}
