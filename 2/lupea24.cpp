#include<stdio.h>
int main()
{
   int a=5;
   for(int j=1;j<=5;j++)
   {
       for(int f=1;f>=a;f++)
       {
           printf("%d",f);
       }
       printf("\n");
       a--;
   }
    return 0;
}
