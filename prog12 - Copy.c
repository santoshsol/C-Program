#include<stdio.h>
// Program Title:: Enter Any Number And Display   that Number Table
// using HaradCore VAlue
// 14/03/2022


void Display(int ino2)
{
   int iCnt = 0,Table = 0;

   for(iCnt = 0; iCnt<=10; iCnt++)
   {
      Table = ino2 * iCnt;

      printf(" %d",Table);

   }

}

int main()
{
    int ino1 = 0;

    printf(" Emter Number\n");
    scanf(" %d",&ino1);

    Display(ino1);
    return 0;
}