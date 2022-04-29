#include<stdio.h>
#include<stdlib.h>
// Program Title :: give value From user in Array make Addition that value   using Helper Function
// Date /16/03/2022/


 int Addition(int brr[], int isize)
 {
     int i = 0, isum = 0;
     for(i = 0; i<=isize; i++)
     {
          isum = isum + brr[i];
     }
     return isum;
 }

int main()
{
    int ino1 = 0, iCnt = 0, ilength = 0;
    int *p = NULL;
    int iret = 0;

    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

    p = (int*)malloc(sizeof(int) *ilength);// Dyanamic memory Allocation

   printf(" Enter Elemnts\n");
   for(iCnt = 0; iCnt<=ilength;iCnt++)
   {
       scanf("%d",&p[iCnt]);
   }

  iret =  Addition(p,ilength); // Function Call

   printf("Addition iS >> %d",iret);

    return 0;
}