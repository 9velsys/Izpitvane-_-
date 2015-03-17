#include <stdio.h>
#include <string.h>

#define max 800


void main()
{
    char  palindrom[max];
    scanf("%s",palindrom);
    int b = strlen(palindrom);
    int z = 0;
    int  c = b - 1;
    while(z < c)
    {
        if(palindrom[z] != palindrom[c])
        {
            z=1;
            break;
        }
        c--;
        z++;
    }
    if(z==1)
        printf("\nNo!");
    else
    printf("\nYes");;
    return 0;
}
