#include<stdio.h>
#include<stdlib.h>
// Program Title : give value From user in Array Check Min Number in Array using Helper Function
// Date /20/03/2022/ 
// check Min Number in Arrayy

 int MinNumber(int Brr[], int isize)
 {
    int  iCnt1 = 0;
    int iMin = Brr [0];   // you need here iMin Intalize with [0] index
    for(iCnt1 = 0; iCnt1<isize; iCnt1++)
    {
        if(Brr[iCnt1] < iMin)
        {
            iMin = Brr[iCnt1];
        }
    }
        printf(" MinNumber iS>> %d",iMin);
 }

int main()
{
    int ilength = 0, iCnt = 0;
    int *p = NULL;

    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

    p = (int*)malloc(sizeof(int)*ilength);

    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<=ilength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

     MinNumber(p,ilength);

     return 0;
}