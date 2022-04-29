#include<stdio.h>
#include<stdlib.h>
// Program Title: give value From user in Array Count >10   <20 Number that Array that value using Helper Function
// Date /19/03/2022/                                                                                          
// Count number 10>  <20  total Number in Array


 int maxminNumber(int brr[], int isize)
 {
     int iCnt = 0, i = 0;
     for(i = 0; i<=isize; i++)
     {
        if((brr[i]>10) && (brr[i]<20))
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

    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

    p = (int*)malloc(sizeof( int) *ilength);

    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<=ilength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

  iret  =  maxminNumber(p,ilength);
   printf(" 10<<>>20 inbetween Number iS>>%d",iret);

      return 0;

}

