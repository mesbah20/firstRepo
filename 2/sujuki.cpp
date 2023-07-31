#include<stdio.h>
int main()
{
   for(int i=3;i<=30;i=i+1)
   {
       if((i%5)==3)
        printf("%d jor number\n" ,i);

   else
   {
       printf("%d bijor number\n",i);
   }
   }
   printf("\n");

    return 0;
}
