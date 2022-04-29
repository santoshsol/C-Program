#include<stdio.h>
// Program Title : Take Chracter From user and Convert  to Capital TO Small
// Date /22/03/2022/ 


char CapitalToSmall(char ch3)
{
     if((ch3>='A') && (ch3<='Z'))
     {
         return ch3 +32;
     }
}

int main()
{
    char ch = '\0';
    char ch2 ='\0';

    printf(" Enter Character\n");
    scanf("%c",&ch);

    ch2 = CapitalToSmall(ch);

    printf(" Capital TO Small %c",ch2);
    return 0;
}