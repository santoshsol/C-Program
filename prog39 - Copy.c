#include<stdio.h>
#include<stdlib.h>
// Program Title : give value From user in Array Check Deffirance in   Max Number and  Min Number
// Array using Helper Function
// Date /10/03/2022/ 


 int MinMAxDiFFrance(int Brr[],int isize)
 {
      int i = 0;
      int iMax = Brr[0];
      int iMin = Brr[0];

      for(i = 0; i<isize; i++)
      {
         if(Brr[i]<iMin)
         {
             iMin = Brr[i]; 
         }
         else if(Brr[i] > iMax)
         {
             iMax = Brr[i];
         }
      }
       return iMax - iMin;
 }

int main()
{
    int ilength = 0, iCnt = 0, iret = 0;
    int *p = NULL;

    
    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

     p = (int*)malloc(sizeof(int)*ilength);

     printf(" Enter Number\n");
     for(iCnt = 0; iCnt<ilength; iCnt++)
     {
         scanf("%d",&p[iCnt]);

     }
        
     iret =   MinMAxDiFFrance(p,ilength);
     printf(" MinMaxDeffrance iS>>%d",iret);

    return 0;

}
