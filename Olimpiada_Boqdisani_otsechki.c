#include <stdio.h>
#include <string.h>
#define Max 10000

int main()
{
    char ograda[Max];
    int a,b,n,i,k,broi=0,max=0,z=0;
    for(i=0;i<10000;i++)
        ograda[i]='0';
    do{
    scanf("%d",&n);
    }while(n<0 || n>1000);
    for(i=0;i<n;i++)
    {
        do{
            scanf("%d",&a);
            scanf("%d",&b);
        }while(a>b || a<0);
        printf("\n");
        for(k=a;k<b;k++)
        {
            ograda[k]='1';
        }
    }
    for(i=0;i<10000;i++)
    {
        if(ograda[i]=='1')
        {
            z++;
            if( z > max)
                max = z;
        }
        else z=0;
    }
    for(i=0;i<10000;i++)
    {
        if(ograda[i]=='0')
        {
            while(ograda[i]=='0')
                i++;
            broi++;
        }
    }
    if(ograda[0]=='0') broi--;
    printf("\n%d %d\n",broi,max);
}
