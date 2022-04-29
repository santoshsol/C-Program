#include<stdio.h>
// Program Title : Take Chracter From user  Swap the that  characters    
// Date /17/03/2022/ 
// using Helper Function

   char Swap(char *p, char *q)
   {
       char temp;

       temp = *p;
       *p = *q;
       *q = temp;
   }

int main()
 {
 
 char ch1, ch2;
    
    printf("Enter first character\n");
    scanf("%c",&ch1);
    
    printf("Enter second character\n");
    scanf(" %c",&ch2);
    
    printf("Before swapping characters are %c %c\n",ch1,ch2);  // first display  swapping character
    
    Swap(&ch1,&ch2); //  Function call with   // Swap(100,200)  send  values with Address
    
    printf("After swapping characters are %c %c\n",ch1,ch2);  // Display Reslut 
    
    return 0;

}