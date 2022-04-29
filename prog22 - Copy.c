#include<stdio.h>
// Program Title : take no From user and Display ABCD Latter on that Number
// using seprate  1 Helper Function
// Date /15/03/2022/

// Input :      6
// iCnt         1    2   3   4    5   6
// Output :     a    b   c   d   e   f

   int  Display(int ino2 )
    {
        char ch = 'A';
        int iCnt = 0;

        for(iCnt = 1; iCnt<=ino2; iCnt++)
        {
             printf("%c\t",ch);
             ch++;    
        }
    }

int main()
{
    int ino1 = 0, iret = 0;

    printf("Enter Number\n");
    scanf("%d",&ino1);
   
    Display(ino1);
    
    return 0;
}