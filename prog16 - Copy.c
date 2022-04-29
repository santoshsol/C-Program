#include<stdio.h>
// Program Title : take no From user and Display reverse Number on that Number
// using seprate  1 Helper Function
// Date /31/1/2022/
// Input :      5
// Output :     5   4   3   2   1

 void  Reverse(int ino2)
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

   Reverse(ino1);

   return 0;
}