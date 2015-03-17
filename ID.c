#include <stdio.h>
#include <string.h>
#define max 90

int main()
{
    char id[max];
    scanf("%s",id);
    int z=0,c;
    int i = strlen(id);
    if((id[z] >= 'A' && id[z]<= 'Z') || (id[z] >= 'a' && id[z]<= 'z') || (id[z]=='_'));
    else
    {
        printf("No!");
        return 0;
    }
    for(c=1;c <i;c++)
    {
        if((id[c] >= 'A' && id[c]<= 'Z') || (id[c] >= 'a' && id[c]<= 'z') || (id[c]=='_') || (id[c]>= '0' && id[c]<= '9'));
        else
        {
            printf("No!");
            return 0;
        }
    }
    printf("Yes");
}
