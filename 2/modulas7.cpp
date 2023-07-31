#include<stdio.h>
int main()
{
   for(int w=7;w<=21;w++)
   {
       if((w%7)==0)
       {
           printf("%d tab\n" ,w);
       }
       else
       {
           printf("%d mobile\n");
       }
       printf("\n");
   }
    return 0;
}
