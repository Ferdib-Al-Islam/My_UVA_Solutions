#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,lena,lenb,m,n,p,r,d;
    char a[105],b[105],c[105],s[105];
    lenb=1;
    c[0]=48;
    for(i=1; i<=100; i++)
    {
        d=0;
        scanf("%s",a);
        if(a[d]==48)
            break;
        lena=strlen(a);
        j=0;
        for(i=lena-1; i>=0; i--)
        {
            b[j++]=a[i];

        }
        n=0;
        l=lena;
        if(l<lenb)
            l=lenb;
        for(k=0; k<l; k++)
        {
            if(lena>k)
                b[k]=b[k]-48;
            else
                b[k]=0;

            if(lenb>k)
                c[k]=c[k]-48;
            else
                c[k]=0;

            p=b[k]+c[k]+n;
            s[k]=p%10+48;
            n=p/10;

        }
        s[k]=48;
        if(n>0)
            s[k++]=n+48;

        for(r=0; r<k; r++)
            c[r]=s[r];

        l=r;
        lenb=l;
    }
    for(m=r-1; m>=0; m--)
        printf("%c",c[m]);
    printf("\n");
    return 0;
}
