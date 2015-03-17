#include <stdio.h>
#define maxbr 40
void main()
{
    int a[200000],b[200000],i,n,m,x,y;
    for(i=0;i<200000;i++)
    {
        a[i] = 0;
        b[i] = 0;
    }
    scanf("%d",&n);
    scanf("%d",&m);
    while(n!=0)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        x = x + 100000;
        y = y + 100000;
        if(x>y)
        {
            x = x + y;
            y = x - y;
            x = x - y;
        }
        while(x<=y)
        {
            a[x]++;
            x++;
        }
        n--;
    }
    n =0;
    while(n<m)
    {
        scanf("%d",&x);
        x = x + 100000;
        b[n]=x;
        n++;
    }
    n=0;
    while(n<m)
    {
        printf("%d",a[b[n]]);
        n++;
    }

}
