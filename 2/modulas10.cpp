#include<stdio.h>
int main()
{
   for(int w=2;w<=22;w++)
   {
       if((w%10)==2)
       {
           printf("%d tuhin\n",w);
       }
       else
       {
           printf("%d anik\n" ,w);
       }
       printf("\n");
   }
    return 0;
}
