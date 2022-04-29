#include<stdio.h>
// Program Title: take String From user and Count Capital & Small Character in String
// Date /30/03/2022/
void  CountCapSml(char *str)
{
    int CCount = 0, SCount =0;

    while(*str !='\0')
    {
      if((*str>='a') && (*str<='z'))
      {
          SCount++;
      }
   
    else if((*str>='A') && (*str<='Z'))
    {
        CCount ++;
    }
      str++;
    }
    
    printf(" Small Count are>> %d",SCount);
    printf(" Capital Count are>> %d",CCount);

}

int main()
{
    int isend = 0;
    char Arr[20];

    printf(" Enter String\n");
    scanf("%[^'\n']s",Arr);
   
   CountCapSml(Arr);

  return 0;

}