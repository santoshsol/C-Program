#include<stdio.h>
// Input : 1
// Output : 1

// Input : 3   >>>> 3 x 2 x 1 = 6
// Output : 6 

// Input : 5
// Output : 120

//  Program Title >gives  Number from use and return Factorial that Number
//  Date /12/03/2022

int Factorial(int ino2)
{
   int iCnt = 0, iFact = 1;

   for(iCnt = 1;iCnt<=ino2; iCnt++)
   {
       iFact = iFact * iCnt;
   }

     return iFact;
}

int main()
{
   int ino1 = 0, iret = 0;

   printf(" Enter Number\n");
   scanf("%d",&ino1);

  iret = Factorial(ino1);

   printf("%d",iret);

   return  0;
}