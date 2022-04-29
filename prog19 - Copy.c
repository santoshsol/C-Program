#include<stdio.h>
// Program Title : take no From user OR Display Avarge  Number on that Number
// using seprate  1 Helper Function
// Date /14/03/2022/
// Input :  

 float Avarge(int x, int y, int z)
 {
      float ireslut = 0.f;
      int isum = 0;
     
      isum = x + y + z;

      ireslut = isum /3;

       return ireslut;
 }

int main()
{
    int ino1 = 0, ino2 = 0, ino3 = 0;
     float iret = 0.f;
    printf(" Enter First  Number\n");
    scanf("%d",&ino1);

    printf(" Enter Second Number\n");
    scanf(" %d",&ino2);

    printf(" Enter Thrid Number\n");
    scanf(" %d",&ino3);


   iret = Avarge(ino1, ino2, ino3);

    printf(" Avarage iS ..>>%f",iret);
    return 0;
}
