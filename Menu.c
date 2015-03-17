#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    int op=1, cuop;
    char c=0;
    while(c != 13)
    {
        system("CLS");
        if(op==1) printf("> 1.Click Enter for Olimpios1\n");
        else printf("  1.Click Enter for Olimpios1\n");
        if(op==2) printf("> 1.Click Enter for Olimpios2\n");
        else printf("  1.Click Enter for Olimpios2\n");
        if(op==3) printf("> 1.Click Enter for Olimpios3\n");
        else printf("  1.Click Enter for Olimpios3\n");
        if(op==4) printf("> 1.Click Enter for Olimpios4\n");
        else printf("  1.Click Enter for Olimpios4\n");
        c = getch();
        if(c==80)
        {
            if(op<4) op++;
            else op = 1;
        }
        if (c==72)
        {
            if(op>1) op--;
            else op = 4;
        }
        if (c == 13)
        {
            switch(op)
            {
                case 1: ShellExecute(NULL,"open","D:\\Ivan\\school\\Sch_Project\\Olimpios1\\bin\\Debug\\Olimpios1",NULL,NULL,SW_SHOWNORMAL);/*tova e komanda za otvarqne na druga programa tuk se ochakva da byde postavena dadena funkciq*/ break;
                case 2: ShellExecute(NULL,"open","D:\\Ivan\\school\\Sch_Project\\Olimpios2\\bin\\Debug\\Olimpios2",NULL,NULL,SW_SHOWNORMAL); break;
                case 3: ShellExecute(NULL,"open","D:\\Ivan\\school\\Sch_Project\\Olimpios3\\bin\\Debug\\Olimpios3",NULL,NULL,SW_SHOWNORMAL); break;
                case 4: ShellExecute(NULL,"open","D:\\Ivan\\school\\Sch_Project\\Olimpios4\\bin\\Debug\\Olimpios4",NULL,NULL,SW_SHOWNORMAL); break;
            }
        }
    }
}
