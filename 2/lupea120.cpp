#include<stdio.h>
int main()
{
   int a=10;
   int s=10;
   while(a<=36)
   {
       s=10;
       while(s<=a)
       {
           printf("%d ",s);
           s++;
       }
       printf("\n");
       a++;
   }
    return 0;
}
