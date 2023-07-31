#include<stdio.h>
int main()
{
  int a=1;
  int b=1;
  while(b<=10)
  {
      a=1;
  while(a<=b)
  {
      printf("%d",a);
      a++;
  }
  printf("\n");
  b++;
  }
    return 0;
}
