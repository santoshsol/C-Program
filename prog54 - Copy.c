#include<stdio.h>
// take String From USer Display Number Of Vowels Capital , OR Small
// Date /20/03/2022/
char DisplayVowels(char *str)
{
    int iCnt = 0;

    while(*str!='\0')
    {
      if((*str =='a' || *str=='e' || *str == 'o' || *str=='i' || *str =='u' || *str =='A' || *str =='E'
       || *str =='O' || *str == 'I' || *str == 'U'))
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

    isend = DisplayVowels(Arr);
    
    printf(" number oF Vowels Are:>%d\n",isend);
    return 0;
    
}