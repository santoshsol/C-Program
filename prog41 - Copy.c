#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// Program Title: give value From user in Array Check  Number checkNumber is ther which index not Array using Helper Function
// Date /20/03/22/                                                         
// serach  Number is there or not  in Arrayy
// Program Not give Correct Reslut 

 int CheckNumber(int Brr[], int isize, int ino2)
 {
      int iCnt = 0; 
      int index =-1;
      for(iCnt = 0; iCnt<isize; iCnt++)
      {
           if(Brr[iCnt] == ino2)
           {
               index = iCnt;
           }
      }
       return index;
 }

int main( )
{
    int ilength = 0, iCnt = 0, ino1 = 0;
    int *p = NULL;
    int  iret = true;

    printf(" Enter Number OF Elemnts\n");
    scanf("%d",&ilength);

    p = (int*) malloc(sizeof(int)*ilength);

    printf(" Enter Number\n");
    for(iCnt = 0; iCnt<ilength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
   
    printf(" Enter Serach Number\n");
    scanf("%d",&ino1);

 iret = CheckNumber(p, ilength,ino1);
 if(iret ==-1)
 {
     printf(" There iS No Such Number\n");
 }
 else
 {
     printf(" Number IS there At Index:%d",iret);
 }
  free (p);  
    
    return 0;
}