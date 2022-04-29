#include<stdio.h>
#include<stdbool.h>
// Program Title : Take  character From  user  And Check Small Character 
// Date /20/03/2022/ 

 bool CheckSmall(char ch1)
 {
     if((ch1>='a') && (ch1<='z'))
     {
          return true;
     }
     else
     {
         return false;
     }
 }

int main()
{
    char ch ='\0';
    bool iret = false;

    printf(" Enter Character\n");
    scanf("%c",&ch);

    iret = CheckSmall(ch);
    if(iret == true)
    {
        printf(" It Small Character\n");
    }
    else
    {
         printf(" iT iS NOt Small Character\n");
    }

    return 0;
}
