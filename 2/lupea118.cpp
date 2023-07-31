#include<stdio.h>
int main()
{
   int a=20;
   for(int s=1;s<=20;s++)
   {
       for(int j=a;j>=1;j--)
       {
           printf("*");
       }
       printf("\n");
       a--;
   }
    return 0;
}
