#include<stdio.h>
// take Characters  From User Swap that Character 
// another variable To Another Variables
// Date// 31/03/2022/
// Program Not wroking Well......
void swap( char *p, char *q) 
{
    char temp;
    temp = *p;
    *p = *q;  // data trsfer q to p 
    *q = temp;
}

int main()
{
       char x,y; 
	
    printf("Enter first character\n");
    scanf("%c",&x);

    printf("Enter Second character\n");
    scanf(" %c",&y);   // we Need Give Space in Second Scanf %c

   printf("before swapping character are %c %c \n", x,y); // call by Adress 
   swap(&x, &y);

   printf(" After Swapping characters %c %c \n",x,y);  // call by value

 return 0;
}

   