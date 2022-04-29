#include<stdio.h>
#include<stdlib.h>
// Program Title : give value From user in Array Count >10 Number that Array that value
// using Helper Function
// Date /18/03/2021/                                                                                                                                                                    
// Count  

int CountNumber(int brr[], int isize)
{
    int i = 0, iCnt = 0;
    for(i = 0; i<=isize; i++)
    {
        if(brr[i] > 5)
        {
            iCnt++;
        }
    }
   return iCnt;
}

int main()
{
    int ilength = 0, iCnt = 0, iret = 0;
    int *p = NULL;

    printf(" Enter number OF Elemnts\n");
    scanf("%d",&ilength);

    p = (int*)malloc(sizeof(int) *ilength);
    
    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<=ilength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
  
      iret = CountNumber(p,ilength);
      printf(" Number is Geratr>>%d",iret);

        return 0;
}