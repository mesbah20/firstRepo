#include<stdio.h>
int main()
{
   for(int w=5;w<=25;w++)
   {
       if((w%5)==0)
       {
           printf("%d mojo\n" ,w);
       }
       else
       {
           printf("%d nojo\n" ,w);
       }
       printf("\n");
   }
    return 0;
}
