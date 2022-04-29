#include<stdio.h>
// Program Title:: Take small Character From user and Convert That 
// Character Small to Capital
// Date/11/03/2022/


char  SmallToCapital(char ch3)
     {
           
      if((ch3>='a') && (ch3<='z'))
      {
          return  ch3 -32;
      }
         
    }

int main()
{
    char ch = '\0';
    char ch2 = '\0';

    printf(" Enter Character\n");
    scanf("%c",&ch);


   ch2 = SmallToCapital(ch);
printf("  Small to Capital >>%c",ch2);

    return 0;
}