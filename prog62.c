#include<stdio.h>
// Program Name: Program give Basic information About Bus Timing
// Date /12/04/2022/



void BusInfo(int ino2)
{

   if (ino2 == 306)
   {
      printf(" Shivaji Nagar Pune Out Time :: [10:30am] [12:30am] [2:30pm] [4:30pm] [9:44pm]\n");
   }
   else if(ino2 == 907)
   {
       printf(" Beed Bus Top Out Time :: [8:30am] [9:44am] [11:44am] [3:30pm] [5:27]\n");
   }
   else if(ino2 == 777)
   {
       printf("Aurangabad Bus Top Out Time :: [7:35am]  [8:12am] [9:44am] [11:58am] [2:48pm] [4:23]\n");
   }
   else if (ino2 == 501)
   {
       printf(" Solapur Bus Top Out Time :: [8:21am] [9:51am]  [10:44am] [11:55am] [1:23pm] [4:44pm]\n");
   }
   else if (ino2 == 499)
   {
       printf(" Sangli Bus Top Out Time :: [8:11am] [9:21am] [11:23am] [2:41pm] [3:30pm] [4:31pm] [5:30]\n");
   }
   else if(ino2 == 888)
   {
      printf(" Latur Bus Top Out Time :: [8:24am] [9:56am] [12:34pm] [2:30pm] [4:11pm] [5:30pm] [7:11pm]\n");
   }
   else if(ino2 == 912)
   {
        printf(" Nagar Bus Top Out Time:: [9:12am] [11:26am] [1:23pm] [2:35pm] [5:55pm] [8:30pm\n");
   }
}


int main()
{
    int ino1 = 0;
   printf(" WelCome Bus IFo::>    Type Number For Check Bus Timing <<>> Pune TO Majalgon>[306] Beed TO Pune>[907] Aurangabad TO Pune>[777] Solapur To Pune>[501] Sangli To Satra > [499] Latur To Ambajogai>[888]  Nagar To Pune>[912]:::::::::>>  ");
   scanf(" %d",&ino1);
     

   BusInfo(ino1);
    
    return 0;
}