#include<stdio.h>
// take Number from user 
// Program Title using modd operator we can got remindar any Number After Division
// and making Addition thise reminder
// 876543
// 8+7+6+5+4+3 = 33
// Date/12/03/2022/

  int Addition(int ino2)
  {
     int isum = 0;
     int idigit =0;

     while(ino2>0)
     {
       idigit = ino2/10;
       isum = isum + idigit;
       ino2 = ino2 /10;
     }
      
      return isum;
  }

int main()
{

    int ino1 = 0, iret = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

  iret =   Addition(ino1);
 
  printf(" %d",iret);
    return 0;
}