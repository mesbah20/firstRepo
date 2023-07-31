#include<stdio.h>
int main()
{
   int a=6;
   for(int j=1;j<=6;j++)
   {
       for(int i=1;i<=a;i++)
       {
          printf("*");
       }
       printf("\n");
    a--;
   }
    return 0;
}
