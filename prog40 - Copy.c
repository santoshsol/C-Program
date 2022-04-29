#include<stdio.h>
#include<stdbool.h>  // bool 
#include<stdlib.h>   // for Dynamic Memory Alloction
// Program Title : give value From user in Array Check  Number checkNumber is there or not Array using Helper Function
// Date /20/03/2022/ 
// check  Number is there or not  in Arrayy
// Program output Display  Correct  


bool CheckNumber(int Brr[], int isize, int ino2)
{
    int i = 0;

      if(ino2 == 0)
        {
            printf( " We type 0 Digit \n");
        }

    for(i = 0; i<isize; i++)
    {
        
        if(Brr[i] == ino2)
        {
            return true;
        }
      
    }
   return false;
}

int main ()
{

    int ilength = 0, iCnt = 0, ino1 = 0;
    int *p = NULL;
    bool iret = false;

    printf(" Enter Number OF Elemts\n");
    scanf("%d",&ilength);

    p = (int*)malloc(sizeof(int)*ilength);

    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<ilength; iCnt++)
    {
       scanf("%d",&p[iCnt]);
    }

    printf(" Enter Sreach Number\n");
    scanf("%d",&ino1);

   iret = CheckNumber(p,ilength,ino1);
     if(iret == true)
     {
         printf(" Number IS There...>>");
     }
     else
     {
        printf(" Number Not There,,,,,");
     }

    return 0;
}