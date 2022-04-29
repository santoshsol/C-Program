#include<stdio.h>
#include<stdbool.h>
// Program Title Check Number is CheckPallindrome or not
// Pallindrome Number is 75257, 121,1234321
// Date /12/03/2022/
 
  bool CheckPallindrome(int ino2)
      {
         int iDigit = 0, Rev = 0;
         int Temp = ino2;

         while(ino2>0)
         {
            iDigit = ino2%10;
            Rev = (Rev *10) + iDigit;
            ino2 = ino2 / 10;
         }
         if(Temp == Rev)    // Comper Number 
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
    int ino1 = 0;
    bool iret = false;
    
    printf("Enter Number\n");
    scanf("%d",&ino1);

   iret =  CheckPallindrome(ino1);
   if(iret == true)
   {
        printf(" It Is Pallindrome Number\n");
   }
   else
   {
       printf(" It Is Not Pallindrome Number\n");
   }
 
  return 0;
}