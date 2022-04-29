#include<stdio.h>
#include<stdbool.h>
// Program Title : Take  character From  user  And Check Capital Character 
// Date /20/03/2022/ 


bool CheckCapital(char ch2)
{
    if((ch2>='A') && (ch2<='Z'))
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
  
  iret = CheckCapital(ch);
  if(iret == true)
  {
      printf(" IT IS Capital Character\n");
  }
 else
 {
     printf(" It IS Not Capital Character\n");
 }
    
    return 0;
}