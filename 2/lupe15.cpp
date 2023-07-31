#include<stdio.h>
int main()
{
    int p=10;
   for(int w=10;w<=25;w++)
   {
       for(int u=10;u<=p;u++)
       {
           printf("*");
       }
       printf("\n");
       p--;
   }
    return 0;
}
