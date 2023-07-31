#include<stdio.h>
int main()
{
   int a=1;
   int s=5;
   while(a<=5)
   {
       s=5;
       while(s>=a)
       {
           printf("%d ",s);
           s--;
       }
       printf("\n");
       a++;
   }
    return 0;
}
