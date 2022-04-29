#include<stdio.h>
// Program Title:: take String From User & Count character in String
// 31/03/2022/
char Countcharacter(char *Str, char ivalue2)
{
     int iCnt = 0;
     while(*Str !='\0')
     {
        if(*Str == ivalue2)  /// match Data in Str== ivalue2 
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
    char Arr[30];
    char ivalue = '\0';
    printf(" Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    printf(" Enter Character\n");
    scanf(" %c",&ivalue);  // it IMP %c give GAP 
    
    isend = Countcharacter(Arr,ivalue);

    printf(" Count IS>> %d\n",isend);
    return 0;
}