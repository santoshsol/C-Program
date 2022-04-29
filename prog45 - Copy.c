#include<stdio.h>
#include<stdbool.h>
// Program Title : Take  character From  user  And 
// Check Digit  Or NOT 
// Date /20/03/2022/ 

bool CheckDigit(char ch1)
{
   if(( ch1>='0') && (ch1<='9'))
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
    char ch = '\0';
    bool iret = false;
     
     printf(" Enter Character\n");
     scanf("%c",&ch);

   iret = CheckDigit( ch);
   if(iret == true)
   {
       printf(" IT IS Digit\n");
   }
   else
   {
       printf(" IT IS Not Digit\n");
   }
    return 0;
}