#include<stdio.h>
//  Program Title > take Number From user return Reminder whole Number
//  Mod  operator it give  remindr if we Divide any Number
//  Date /12/ 03/ 2022/

   
   void Reminder(int ino2)
   {
        int idigit = 0;

        while(ino2>0)
        {
        
        idigit = ino2 %10;
        printf("%d",idigit);
        ino2 = ino2 /10;

      }
   }
   
   int main()
   {
       int ino1 = 0;
    printf(" Enter Number\n");
    scanf("%d",&ino1);

   Reminder(ino1); // Function Call

     return  0;
   }