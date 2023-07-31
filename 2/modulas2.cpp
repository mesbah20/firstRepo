#include<stdio.h>
int main()
{
   for(int r=133;r<=189;r++)
   {
       if((r%3)==2)
       {
           printf("%d black\n",r);
       }
       else
       {
           printf("%d white\n",r);
       }
       printf("\n");

   }
    return 0;
}
