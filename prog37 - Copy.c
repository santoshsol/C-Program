#include<stdio.h>
#include<stdlib.h>
// Program Title : give value From user in Array Check Max Number in Array using Helper Function
// Date /19/03/2022/ 
// check Max Number in Arrayy

int CheckMAxNumber(int brr[], int isize)
{

    int iCnt1 = 0, iMax = 0;
    for(iCnt1 = 0; iCnt1<isize; iCnt1++)
    {
       if(brr[iCnt1] > iMax )
       {
            iMax = brr[iCnt1];
       }
    }
       printf("%d",iMax);  // Display MAx Number
 }

int main()
{
    int ilength = 0, iCnt = 0, iret = 0;
    int *p = NULL;

    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

    p = (int*)malloc(sizeof(int)*ilength);

    printf(" Enter Number\n");
    
    for(iCnt = 0; iCnt<=ilength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

      CheckMAxNumber(p,ilength);

    return 0;

    
}
