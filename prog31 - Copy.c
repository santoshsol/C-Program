#include<stdio.h>
#include<stdbool.h>
// program Title : Take Chracter From user and CheckPallindrome that Chracter in String   
// CheckPallindrome String
// Date /17/03/2022/ 
// using Helper Function
// using Flag 

 bool CheckPallindrome(char Str[])
 {
       
   char *end = NULL; // pointer
   bool flag = true;

   end = Str;  // pointer & String
   
   while(*end !='\0')
   {

       end++;   // string Revrse Order checking string
   }
   end--;  

  while(Str <end)
  {
      if(*Str != *end) // Same Nsel tr
      {
          flag = false;
           break;
      }
   Str++;
   end--;
  
  }
       return flag;
 }

int main()
{

    char  Arr [20];
    bool iret = false;

   printf(" Enter String\n");
    scanf("%[^'\n']s",Arr);

    iret = CheckPallindrome(Arr);
     if(iret == true)
     {
         printf("It IS Pallindrome String\n");
     }
     else
     {
         printf(" It IS Not Pallindrome String\n");
     }
    
     return 0;

}