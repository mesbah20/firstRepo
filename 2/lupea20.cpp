#include<stdio.h>
int main()
{
   int a=11;
   for(int r=1;r<=11;r++)
   {
       for(int j=1;j<=a;j++)
       {
           printf("%d",r);
       }
       printf("\n");
       a++;
   }
    return 0;
}
