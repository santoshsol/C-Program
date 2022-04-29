#include<stdio.h>
#include<stdlib.h>
// Program Title: Take Chracter From user and Count Charactr in String small character
// Date /22/03/2022/ 
// printf in  %s use printf the String
// using Helper Function

// Hello
// 4

// HELlo
// 2

// HELLO

  char CountSmall(char *Str)
  {
      int iCnt = 0;

      while( *Str !='\0')
      {
        if((*Str>='a') && (*Str<='z'))
        {
            iCnt++;
        }
           Str++;
      }
      return iCnt;
  }


int main()
{
    char Arr[20];
    int isend = 0;

    printf(" Enter Number OF Charcter\n");
    scanf(" %[^'\n']s",Arr);

  

  isend = CountSmall(Arr);

   printf(" small Count iS>>%d\n",isend);

     return 0;

}