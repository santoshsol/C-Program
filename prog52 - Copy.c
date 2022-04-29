#include<stdio.h>
// Program Title: take String from user Count Space 
// space counter 
// Date /30/03/2022/
char CountSpace(char *Str)
{
    int iCnt = 0;

    while(*Str !='\0')
    {
        if(*Str ==' ')
        {
            iCnt++;
        }
       Str++;
    }
   return iCnt;
}

int main()
{
     int isend = 0;
     char Arr[20];

     printf(" Enter String\n");
     scanf("%[^'\n']s",Arr);

   isend = CountSpace(Arr);

   printf(" white Space are:>%d",isend);
   return 0;
}