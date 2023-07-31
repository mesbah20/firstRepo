#include<stdio.h>
int main()
{
   for(int s=11;s<=30;s++)
   {
       if((s%3)==2)
       {
           printf("%d car\n",s);
       }
       else
       {
           printf("%d bike\n" ,s);
       }
       printf("\n");
   }

    return 0;
}
