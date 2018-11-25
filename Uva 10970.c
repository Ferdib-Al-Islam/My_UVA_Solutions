#include <stdio.h>

int main()
{
    long row, column, result;
    while(scanf("%ld %ld", &row, &column)==2)
    {
        if(1<=row && row<=300 && 1<=column && column<=300)
        {
            result=(row*column);
            printf("%ld\n", result-1);
        }
    }
    return 0;
}
