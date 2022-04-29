#include<stdio.h>
// Program Title : Array Basic Structrue
// Date /16/03/2022/


int main()
{
  int isum = 0;
  int Arr[5] = {10,20,30,40,50};

  printf("%d",Arr[0]);
  printf("%d",Arr[1]);
  printf("%d",Arr[2]);
  printf("%d",Arr[3]);
  printf("%d",Arr[4]);

  isum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4];
   printf(" Addition is %d\n",isum);

  return 0;
}
