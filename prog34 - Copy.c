#include<stdio.h>
#include<stdlib.h>

// program Title : give value From user in Array Make Addition of Odd Number Number that Array that value using Helper Function
// Date /18/03/2022/

int AdditionOddNumber(int brr[],int isize)
{
     int isum = 0, i = 0;

     for(i = 0; i<=isize;i++)
     {
       if((brr[i] %2) !=0)
       {
           isum = isum + brr[i];
       }
     }
    return isum;
}

int main()
{
   int ilength =0, iCnt = 0, iret = 0;
   int *p = NULL;

   printf(" Enter Number OF Elemnts\n");
   scanf("%d",&ilength);

   p =  (int*)malloc(sizeof(int) *ilength); // Dyanamic memory Allocation
   
   printf(" Enter Number\n");
   for(iCnt = 0; iCnt<=ilength;iCnt++)
   {
        scanf("%d",&p[iCnt]);
   }
  
 iret = AdditionOddNumber(p,ilength);

  printf(" Addition iS>>%d",iret);

    return 0;

}