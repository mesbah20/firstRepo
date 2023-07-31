#include<stdio.h>
int main()
{
   for(int q=1;q<=25;q++)
   {
       for((q%5)==5)
       {
           printf("%d moka\n");
       }
       else

       {
           printf("%d doka\n");
       }
       printf("\n");
   }
    return 0;
}
