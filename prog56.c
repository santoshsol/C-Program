#include<stdio.h>
#include<stdbool.h>
// Program Title  checkpallindrome String  example > abcba
// 31/03/2022/

 bool Checkpallindrome  (char *str)
{
   char *start = NULL ;
   char *end = NULL ;
   start = str;
   end = str;
   while (*end != '\0')      // String end pryant ++ kra
   {
       end++;
   }
   end--;
    
    
    while (start<end)     // crosing by Adress
    {
        if(*start != *end)
        {
            break;   //joptyant String crossing hot nahi topryant ++
        }
    
      start++;
      end--;
    }
    
    if (start<end)
    {
        return false;
    }
    
    else
    {
         return true;
    }
 }
int main()
{
    char Arr[20];
    bool isend = false;

    printf(" Enter String\n");
     scanf("%[^'\n']s",Arr);

  isend =  Checkpallindrome(Arr);
  if(isend == true)
  {
      printf(" IT IS Pallindrome String\n");
  }
  else
  {
      printf(" IT is Not Pallindrome String\n");
  }

  return 0;
}