#include<stdio.h>
int main()
{
   int a=19;
   for(int s=1;s<=19;s++)
   {
       for(int j=a;j>=5;j--)
       {
           printf("%d ",j);
       }
       printf("\n");
       a--;
   }
    return 0;
}
