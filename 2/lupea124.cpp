#include<stdio.h>
int main()
{
   int a=30;
   for(int s=10;s<=30;s++)
   {
       for(int j=a;j>=1;j--)
       {
           printf("%d",j);
       }
       printf("\n");
       a--;

   }
    return 0;
}
