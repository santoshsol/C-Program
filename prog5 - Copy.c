#include<stdio.h>
//  program Titale >Mod  operator it give  remindr if we Divide any Number
//  Date /12/03/2022/
//  Take Hardcore Value


void Display()
{
    int ino1 = 1275;
     int idigit = 0;


     idigit =ino1 %10;
     printf("%d",idigit);
     ino1 = ino1 / 10;

     idigit =ino1 %10;
     printf("%d",idigit);
     ino1 = ino1 / 10;

     idigit =ino1 %10;
     printf("%d",idigit);
     ino1 = ino1 / 10;

     idigit =ino1 %10;
     printf("%d",idigit);
     ino1 = ino1 / 10;
}

int main()
{
    
   Display();

return 0;

}