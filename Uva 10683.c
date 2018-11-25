#include<stdio.h>

int main()
{
    long long dectime, tradtime, totaltime;
    int dh,dm,ds,dc,th,tm,ts,tc;

    while(scanf("%lld", &tradtime) != EOF)
    {
        tc=tradtime%100;
        tradtime=tradtime/100;
        ts=tradtime%100;
        tradtime=tradtime/100;
        tm=tradtime%100;
        tradtime=tradtime/100;
        th=tradtime%100;

        totaltime=th*360000+tm*6000+ts*100+tc;

        dectime=(10000000*totaltime)/8640000;
        printf("%07lld\n", dectime);
    }
    return 0;
}
