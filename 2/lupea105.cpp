#include<stdio.h>
int main()
{
   int j;
   scanf("%d",&j);
   for(int a=1;a<=10;a++)
   {
       for(int s=j;s>=5;s--)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
