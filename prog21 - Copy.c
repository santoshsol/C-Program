#include<stdio.h>
// Program Title : take no From user OR Count  Total Number gratar >5
// using seprate  1 Helper Function
// Date /15/03/2022/

// Input : 127894 
// Output : 3

// Input : 561750
// Output : 4

int MaxNumber(int ino2)
{
    int idigit = 0, iCnt = 0;

    while(ino2>0)
    {
       idigit = ino2 %10;

       if((idigit>5))
       {
           iCnt++;
       }
      ino2 = ino2 / 10;
   }
      return iCnt;
}

int main()
{
    int ino1 = 0, iret = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

 iret = MaxNumber(ino1);

 printf(" MaxNumber IS>>%d",iret);
  return 0;
}