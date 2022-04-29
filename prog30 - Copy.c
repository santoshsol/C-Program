#include<stdio.h>
#include<stdlib.h> // pakage For Dynamic memory Allocation 
// Program Title : give value From user in Array Calculte Avarage that value using Helper Function
// Date /17/03/2022/ 
// calculte Avarage  total Number in Array


int Avarage(int brr[], int isize)
{
     int isum = 0, i = 0;
     float ireslut = 0.f;

     for(i = 0; i<=isize; i++)
     {
         isum = isum + brr[i];
     }
    
     ireslut =  isum/isize;

     return ireslut;

}

int main()
{
    int iCnt = 0, ilength = 0;
    int *p = NULL;
    float iret = 0.f;


    printf(" Enter Number Of Elemnts\n");
    scanf("%d",&ilength);

    p = (int*) malloc (sizeof(int) *ilength);// Dyanamic memory Allocation

    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<=ilength;iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

       iret = Avarage(p,ilength);

       printf(" Avarage IS ....%f",iret);

       return 0;
}