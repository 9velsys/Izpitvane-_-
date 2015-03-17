#include <stdio.h>
#include <string.h>

#define max 200

int main()
{
    char skoba[max];
    int sk[250][2],b=0,l,i1,i,z=0,swap1,swap2;
    gets(skoba);
    l = strlen(skoba);
    for(i = 0;i<l;i++)
    {
        if(skoba[i]=='(')
            b++;
        if(skoba[i]==')')
            b--;
        if(b < 0)
        {
            printf("Wrong input");
            return 0;
        }
    }
    if(b != 0)
    {
        printf("Wrong input");
        return 0;
    }
    printf("Yes");
    for(i = 0; i < l;i++)
    {
        if(skoba[i]==')')
        {
            for(i1= i - 1;i>0; i1--)
            {
                if(skoba[i1]=='(')
                {
                    skoba[i1]='*';
                    sk[z][0]=i;
                    sk[z][1]=i1;
                    z++;
                    break;
                }
            }
        }
    }
    for(i=0;i<z;i++)
        for(i1=0;i1<z;i1++)
        {
            if(sk[i][0]<sk[i1][0])
            {
                swap1=sk[i][0];
                sk[i][0]=sk[i1][0];
                sk[i1][0]=swap1;
                swap2=sk[i][1];
                sk[i][1]=sk[i1][1];
                sk[i1][1]=swap2;
            }
        }
    i=0;
    while(i<z)
    {
        printf("\n%d \t %d\n",sk[i][0],sk[i][1]);i++;
    }
    return 0;
}
