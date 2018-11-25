#include<stdio.h>
#include<string.h>

int in[26];
int now;

int main()
{
    int out[26],i,j,k,num,l,c=0,a,b,t,m,count,temp=-1;
    char line[600];

    scanf("%d",&num);
    for(j=0; j<=num; j++)
    {
        gets(line);
        i=strlen(line);
        for(k=0; k<i; k++)
        {
            for(l=0; l<26; l++)
            {
                if(line[k]=='a'+l || line[k]=='A'+l)
                    in[l]++;
            }
        }
    }

    for(l=0; l<26; l++)
        out[l]=in[l];
    for(a=1; a<26; a++)
        for(b=25; b>=a; b--)
        {
            if(in[b-1]<in[b])
            {
                t=in[b-1];
                in[b-1]=in[b];
                in[b]=t;
            }
        }

    for(l=0; l<26; l++)
    {
        count=1;
        if(in[l])
        {
            if(in[l] != in[l-1])
                now=0;
            for(m=now; m<26; m++)
            {
                if((out[m]==in[l]) && count==1 && temp != m)
                {
                    printf("%c %d\n",'A'+m,in[l]);
                    temp = m;
                    now=m;
                    count++;
                }
            }
        }
    }
    return 0;
}
