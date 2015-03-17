#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,x1,y1,x2,y2,razstoqnie,min;
    float raz1,raz2,raz3,raz4;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    if(x1 > x2)
    {
        x1 = x2 + x1;
        x2 = x1 - x2;
        x1 = x1 - x2;
    }
    if(y1 > y2)
    {
        y1 = y2 + y1;
        y2 = y1 - y2;
        y1 = y1 - y2;
    }
    if(x1<=x && x<=x2 && y1<=y && y<=y2)//ako e vytre
    {
        razstoqnie = 0;
        printf("%d",razstoqnie);
        return 0;
    }
    if(x1<=x && x<=x2)//otdolu ili otgore
    {

        if(y1>y)
        {
             razstoqnie = y1-y;
             printf("%d",razstoqnie);
             return 0;
        }
        else
        {
            razstoqnie = y - y2;
            printf("%d",razstoqnie);
            return 0;
        }
    }
    if (y1<=y && y<=y2)
    {
        if(x1 > x)
        {
            razstoqnie = x1 - x;
            printf("%d",razstoqnie);
            return 0;
        }
        else
        {
            razstoqnie = x - x2;
            printf("%d",razstoqnie);
            return 0;
        }
    }
    raz1 = sqrt((x1-x)*(x1-x) + (y1-y)*(y1-y));
    raz2 = sqrt((x2-x)*(x2-x) + (y1-y)*(y1-y));
    raz3 =sqrt((x1-x)*(x1-x) + (y2-y)*(y2-y));
    raz4 = sqrt((x2-x)*(x2-x) + (y2-y)*(y2-y));
    if(raz1 < raz2)
    {
        if(raz1 < raz3)
        {
            if(raz1<raz4)
            {
                razstoqnie = raz1;
                if(razstoqnie<raz1)
                    razstoqnie++;
            }
            else
            {
                razstoqnie = raz4;
                if(razstoqnie<raz4)
                    razstoqnie++;
            }
        }
        else
        {
            if(raz3<raz4)
            {
                razstoqnie = raz3;
                if(razstoqnie<raz3)
                    razstoqnie++;
            }
            else
            {
                razstoqnie = raz4;
                if(razstoqnie<raz4)
                    razstoqnie++;
            }
        }
    }
    else
    {
        if(raz2 < raz3)
        {
            if(raz2<raz4)
            {
                razstoqnie = raz2;
                if(razstoqnie<raz2)
                    razstoqnie++;
            }
            else
            {
                razstoqnie = raz4;
                if(razstoqnie<raz4)
                    razstoqnie++;
            }
        }
        else
        {
            if(raz3<raz4)
            {
                razstoqnie = raz3;
                if(razstoqnie<raz3)
                    razstoqnie++;
            }
            else
            {
                razstoqnie = raz4;
                if(razstoqnie<raz4)
                    razstoqnie++;
            }
        }
    }
    printf("\n%d\n",razstoqnie);
}
