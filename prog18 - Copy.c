#include<stdio.h>
 // Program Title : take no From user if Number is Even Display * OR Display #  Number on that Number
// using seprate  1 Helper Function
// Date /14/03/2022/
// Input :      5
// Input :      6
// iCnt          1    2   3   4    5   6
// Output :    *    #   *   #   *   #

 void Display(int ino2)
 {
    int  iCnt = 0;

    for(iCnt = 0; iCnt<= ino2; iCnt++)
    {
        if((iCnt %2) == 0)
        {
            printf(" *\t");
        }
        else
        {
            printf(" #\t");
        }
    }
 }      

int main()
{
    int ino1 = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

    Display(ino1);

    return 0;
}