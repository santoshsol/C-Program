#include<stdio.h>
//  Program Title >Take Number from user and return Factor that Number
//  example = 1, 2, ,3 ,4 , 6 = 12  saglya number ne gunakar kyla 12 Answer kadta yt
//  Date /12/03/2022/
// > Factor of are: 1,2,3,6,
// 1*6, 2*3, 3*2, 6*1 = 6 

void Factor(int ino2)
{
     int iCnt = 1;       // intialize iCnt 1 here  important

     for(iCnt = 1; iCnt<=ino2; iCnt++)
     {
    
    if((ino2 % iCnt) == 0)
     {
         printf("%d",iCnt);
     }

    }
}

int main()
{
    
    int ino1 = 0;

    printf(" Enter Number\n");
    scanf("%d",&ino1);
   
    Factor(ino1);

    return 0 ;

}

