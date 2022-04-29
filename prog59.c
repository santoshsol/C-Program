#include<stdio.h>
// Program Title : take No from  user Convert that Number Binary Format
// Date /03/04/2022/

void DisplayBinary(int ino2)
{
     int iDigit = 0;

     while(ino2 !=0)
     {
        iDigit = ino2 %2;  //  bhagkar krun uralili baki 
        printf(" %d\t",iDigit);
        ino2 = ino2 / 2;
     }
}

int main()
{

    int ino1 = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

    DisplayBinary(ino1);

    return 0;
}