#include <stdio.h>
#include <string.h>
#define max 999

int main()
{
    char small[max],big[max],sum[max];
    scanf("%s",small);
    int i,len,j,change,b,naum=0;
    len = strlen(small);
    sum[0]='\0';
    b =  len;
    //Small
    for(i=0;i<len - 1;i++)
    {
        for(j=0;j<len - i - 1;j++)
        {
            if(small[j]> small[j+1])
            {
                change=small[j];
                small[j]=small[j+1];
                small[j+1]=change;
            }
        }
    }
    //Big
    for(i=0;len>=0;i++)
    {
        len--;
        big[i]=small[len];
    }
    big[i]='\0';
    if(small[0]=='0')
    {
        i=0;
        while(small[i]=='0')
            i++;
        small[0]=small[i];
        small[i]='0';
    }
    //Sum
    j = b;
    while(b>=0)
    {
        if(big[b] + naum >= small[b])
            {
                big[b]=big[b]-small[b] + naum + 48;
                naum = 0;
            }
        else
        {
            big[b]=big[b]-small[b] + 10 + 48;
            naum = -1;
        }
        b--;
    }
    for(i = 0;big[i]=='0';i++);
    for(;i<j;i++)
        printf("%c",big[i]);
    return 0;
}
