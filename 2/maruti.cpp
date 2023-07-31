#include<stdio.h>
int main()
{
   for(int i=5;i<=10;i=i+1)
   {
       if(i==9)
        continue;
       printf("%d " ,i);
       printf("\n");

   }
    return 0;
}
