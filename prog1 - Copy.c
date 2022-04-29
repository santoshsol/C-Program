#include<stdio.h>
// program Title take Number From user and convert this Number reverse order using for loop
// exmple give number 7 
// Display ... 7654321
// Date 29/1/2022

void reverse(int ino2)
{
   int iCnt = 0;

   for(iCnt = ino2; iCnt>0; iCnt--)
   {
       printf(" %d",iCnt);
   }

}

int main()
{
  
    int ino1 = 0;
   printf(" Enter Number\n");
   scanf("%d",&ino1);
   reverse(ino1);

   return 0;
}