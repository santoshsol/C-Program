#include<stdio.h>
 // Program take String From user & make that String Reverse order
 // Date /03/04/2022

char Reverse(char *start)
{
   char *end = start; // end is pointer
   char temp;  // local variable

   while(*end !='\0')
   {
       end++;
   }
 
 end --;

while(start <end) // left to right trevling 
{
    temp = *start;    
    *start = *end;  // Data changing
    *end = temp;

    start ++;
    end --;
  }
}

 int main()
 {
     char Arr[20];

     printf(" Enter String\n");
     scanf("%[^'\n']s",Arr);

     Reverse(Arr);

 printf("Reverse String is :%s\n" ,Arr);
     return 0;
 }