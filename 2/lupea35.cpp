#include<stdio.h>
int main()
{
   int a=10;
   for(int s=1;s<=10;s++)
   {
       for(int j=a;j>=1;j--)
       {
           printf("%d %d",j);
       }
       printf("\n");
       a--;
   }
    return 0;
}
