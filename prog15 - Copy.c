#include<stdio.h>
// Program Title : take no From user and Display * and Number  that Number
// using seprate  1 Helper Function
// Date /12/03/2022/


void Display(int ino2)
{
   int i = 0;

   for(i = 1; i<=ino2;i++)
   {
       printf("  %d *\t",i);
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