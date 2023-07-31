#include<stdio.h>
int main()
{
   int a=7;
   for(int w=1;w<=7;w++)
   {
       for(int z=a;z>=1;z--)
       {
           printf("%d",z);
       }
       printf("\n");
       a--;


   }
    return 0;
}
