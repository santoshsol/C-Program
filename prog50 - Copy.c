#include<stdio.h>
// Program Title: Take Chracter From user and Count Charactr in String Capital character
// we can use here >>   Str[] str* Same use 
// Date /30/03/2022/

 char CountCapital(char  str*)
 {
      int iCnt = 0;
     while(*str !='\0')
     {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
       str++;    
     }
    return iCnt;
 }

int main()
{
    int isend = 0;
    char Arr[20];

    printf(" Enter String\n");
    scanf("%[^'\n']s",Arr);

    isend = CountCapital(Arr);

    printf(" Capital latter is %d\n",isend);
    return 0;
}