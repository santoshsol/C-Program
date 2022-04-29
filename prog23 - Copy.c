#include<stdio.h>
// Program Title : take no From user and Display  Rows and Colum that Number
// 4 rows   > *    *   *    *  4 < colum
//            *    *   *    *
//            *    *   *    *
//            *    *   *    *
// using seprate  1 Helper Function
// Date /15/03/2022/

 int Display(int iRows , int jColum)
     {
        int i = 0, j = 0;
       
       for(i = 1; i<=iRows; i++)
       {
           for(j = 1; j<=jColum; j++)
           {
               printf("*\t");
           }
           printf("\n");
        }
     }

int main()
{
    int ino1 = 0;
    int ino2 = 0;

    printf(" Enter Number OF Rows\n");
    scanf("%d",&ino1);

    printf(" Enter Second Number OF Colum\n");
    scanf("%d",&ino2);

    Display(ino1,ino2);
     
     return 0 ;

}
