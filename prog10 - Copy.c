#include<stdio.h>
// take Number from user  using 2 function 
// program Title using modd operator we can got remindar any Number After Division
// Make Reverse  total Number in reminder 
// Date/12/03/2022/

int Reverse(int ino2 )
{
    int iCnt = 0, iRev = 0, idigit = 0;

    while(ino2>0)
    {
       idigit = ino2%10;
      
       iRev = (iRev *10) + idigit;

       ino2 = ino2 / 10;
    }  
      return iRev;  
}


int main()
{
    int ino1 = 0, iret = 0;

    printf(" Enter Number\n");
    scanf("%d",&ino1);
 
   iret  =  Reverse(ino1);

   printf("%d",iret);
   return 0;
}
