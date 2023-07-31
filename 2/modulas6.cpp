#include<stdio.h>
int main()
{
   for(int i=5;i<=25;i++)
   {
       if((i%6)==3)
       {
           printf("%d moja\n" ,i);
       }
       else
       {
           printf("%d kosa\n",i);
       }
       printf("\n");
   }
    return 0;
}
