#include<stdio.h>
// take Number from user  using 2 function 
// Program Title  using modd operator we can got remindar any Number After Division
// Count total Number in reminder only Even Number
// Date/13/03/2022/

int  OddAdittion(int ino2)
{
   int iCnt = 0, idigit = 0;

   while(ino2>0)
   {
     idigit = ino2%10;  
    
     if((ino2 %2 ) == 0)  // ino2 % 2
     {
         iCnt++;
     }
      ino2 = ino2/10; 
   }
     return iCnt;
}

int main()
{

    int ino1 = 0, iret = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

  iret = OddAdittion(ino1);

  printf(" Addition is %d",iret);

  return 0;
}