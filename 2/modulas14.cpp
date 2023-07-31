#include<stdio.h>
int main()
{
   for(int w=8;w<=19;w++)
   {
       if((w%8)==0)
       {
           printf("%d vuva\n" ,w);
       }
       else
       {
           printf("%d momu\n" ,w);
       }
       printf("\n");
   }
    return 0;
}
