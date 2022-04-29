#include<stdio.h>
// program Title : Take Chracter From user and Toggle Chracter 
// type P > Display p  type a >Display A
// Date /22/03/2022/ 


 char  ToggleChar(char ch3)
    {
         if((ch3>='A') && (ch3<='Z'))
         {
            return  ch3 +32;
         }
        
           else if((ch3>='a') && (ch3<='z'))
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


    ch2 = ToggleChar(ch);

     printf(" ToggleChar iS>> %c",ch2);

     return 0;
}