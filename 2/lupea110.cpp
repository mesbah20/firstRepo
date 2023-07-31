#include<stdio.h>
int main()
{
   for(int a=15;a<=50;a++)
   {
       if((a%15)==1)
       {
           printf("%d gold\n",a);
       }
       else
       {
           printf("%d silver\n",a);
       }
       printf("\n");
   }
    return 0;
}
