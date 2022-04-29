#include<stdio.h>
// Program Title:: Display minimum Number
// Date /15/03/2022/


int Display(int ino1, int ino2)
{
     int reslut = 0;
    if(ino1 < ino2)
    {
          reslut = ino1;
    }
    else
    {
        reslut = ino2;
    }

   return reslut;
}

int main()
{
    int ino1 = 0, ino2 = 0;
    int iret = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

    printf(" Enter Second number\n");
    scanf("%d",&ino2);
    
 iret = Display(ino1,ino2);

 printf(" Min Number iS>>%d",iret);

    return 0;
}