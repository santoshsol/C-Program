#include<stdio.h>
#include<stdlib.h> // for Dyanamic memory Allocation
// Program Title : give value From user in Array Count Even Number that Array that value using Helper Function
// Date /18/03/2022/ 
// Count Even Number  total Number in Array

int EvenNumber(int brr[], int isize)
{
      int i = 0, iCnt1 = 0;

      for(i = 0; i<=isize; i++)
      {
          if((brr[i] %2) == 0)
          {
              iCnt1++;
         }
    }
    return iCnt1;
}

int main()
{
    int iCnt = 0, ilength = 0;
    int *p = NULL;
    int iret = 0;
    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

     p = (int*)malloc(sizeof(int) *ilength);// Dyanamic memory Allocation

    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<=ilength;iCnt++)
     {
        scanf("%d",&p[iCnt]);
     }

    iret =  EvenNumber(p,ilength);

    printf(" Even Count iS :>>%d",iret);
      return 0;

}

