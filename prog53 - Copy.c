#include<stdio.h>
// Take String From User Display Number OF Vowels
// Case senstive 
// Date /30/03/2022/

char  DisplayVowels(char *str)
{
   int iCnt = 0;
   while(*str !='\0')
   {
       if((*str == 'a') || (*str =='e') || (*str =='i') ||(*str =='o') ||(*str =='u'))
       {
           iCnt++;
       }
       str++;
   }
     return iCnt;
}

  int main()
  {
      int isend  = 0;
      char Arr[20];

      printf(" Enter String\n");
      scanf("%[^'\n']s",Arr);

     isend =  DisplayVowels(Arr);

     printf(" Number oF Vowels Are:>%d\n",isend);
     return 0;
  }