#include<stdio.h>
// Program Title take no From user and Display   Below Same Structure 
//    iRow = 4
//    iCol = 4
 
//   $   *   *   *
 
//    *   $   *   *
 
//    *   *   $   *
 
//    *    *   *   $
                      
// Using seprate  1 Helper Function
// Date /15/03/2022/


 int Display(int iRow, int jColm)
         {

           int i = 0; 
           int j = 0;

           for(i = 1; i<=iRow; i++)
           {
                for(j = 1; j<=jColm; j++)
                {
                     if(i == j)
                     {
                         printf(" $\t");
                     }
                     else
                     {
                         printf(" *\t");
                     }
                }
               printf(" \n");
            }
         }

int main()
{
    int ino1 = 0;
    int ino2 = 0;

    printf(" Enter Number OF Rows\n");
    scanf(" %d",&ino1);

    printf(" Enter Number OF Colum\n");
    scanf(" %d",&ino2);

    Display(ino1 ,ino2);

  return 0;
}