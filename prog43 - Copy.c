#include<stdio.h>
#include<stdbool.h>
// Program Title : Take  character From  user  And Check Capital Character 
// Using ASSCI VAlue >65       90<
// Date /20/03/2022/ 


bool CheckCapital(char ch1)
{
     if((ch1>=65) && (ch1<=90))
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
   
  iret =  CheckCapital(ch);
    if(iret == true)
    {
        printf(" It IS Capital Character\n");
    }
    else
    {
        printf(" IT IS Not Capital Character\n");
    }
    
    return 0;
}
