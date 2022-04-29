#include<stdio.h>
// Date /14/03/2022
// Enter  First Number >=2 nacha gunakar 4 timing >  2*2*2*2
// Enter Second Number >=4
//  Power is >>16
// program Title : Calculte  The Power of Number

int Power(int x1 , int y1)
{
     int iCnt = 0, imult = 1;

     for(iCnt = 1; iCnt<= y1; iCnt++)
     {

          imult = imult * x1;
     }

     return imult;
}
int main()
{
    int ino1 = 0, ino2 = 0;
    int ireslut = 0;
    
    printf(" Enter Fisrt number\n");
    scanf("%d",&ino1);

    printf(" Enter Second Number\n");
    scanf("%d",&ino2);

    ireslut = Power(ino1, ino2);

     printf(" Power is >>%d",ireslut);
   
     return 0;
}