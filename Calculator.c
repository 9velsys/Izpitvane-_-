#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
    int a,b;
    char znak[1];
    scanf("%d",&a);
    while (1)
    {
        printf("\n");
        scanf("%c",&znak[0]);
        scanf("%c",&znak[0]);
        if(znak[0]=='=')
        {
            printf("%d",a);
            break;
        }
        else
        {
             scanf("%d",&b);
            switch(znak[0])
            {
            case '+':
                a = a + b; break;
            case '-':
                a = a - b; break;
            case '*':
                a = a * b; break;
            case '/':
                if(b == 0){printf("Wrong input"); break;}a = a / b; break;
            default:
                printf("Reenter again :)\n"); break;
            }
        }
    }
}
