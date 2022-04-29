#include<stdio.h>
// Program Title : take no From user and Display Even  Number on that Number
// using seprate  1 Helper Function
// Date /12/03/2022/
// Input :    5
// iCnt        1    2   3   4    5
// Output :    2    4   6   8   10


void  EvenNumber(int ino2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<=ino2; iCnt++)
    {
        if((iCnt %2) == 0)
        {
           printf(" %d",iCnt);
        }
    }
}
int main()
{

    int ino1 = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

    EvenNumber(ino1);
    return 0;
}