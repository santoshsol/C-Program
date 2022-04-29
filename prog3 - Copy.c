#include<stdio.h>
#include<stdbool.h>
// Program Title: Check Even Number

bool CheckEven(int ino2)
{
        if((ino2 %2) == 0)  // ino2 printf
        {
            return true;
        }
        else
        {
            return false;
        }
}

int main()
{
    int ino1 = 0;
     bool iret = false;

    printf(" Enter Number\n");
    scanf("%d",&ino1);

 iret =  CheckEven(ino1);
 if(iret == true)
 {
     printf(" It Is Even Number\n");
 }
 else
 {
     printf(" It is Not Even Number\n");
 }

}