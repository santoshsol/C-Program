#include<stdio.h>
// Date /12/03/2022
// Program Title:: Take any Number From user and Display * on Same Number


 void Display(int ino2)
 {
     int i = 0;
     for(i = 0; i<=ino2; i++)
     {
         printf(" *\t");
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