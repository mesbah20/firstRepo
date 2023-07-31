#include<stdio.h>
int main()
{
   int i;
   for(i=1;i<=10;i=i+1)
   {
       if((i%3)==0)
       printf("%d  bigor\n",i);


       else
       {
           printf("%d jor\n" ,i);
       }
   }

   printf("\n");




    return 0;
}
