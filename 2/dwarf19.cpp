#include<stdio.h>
int main()
{
   int a,s,d;
   a=500;
   s=800;
   d=500;
   a=s-d;
   d=a-s;
   printf("%d\n%d\n" ,a,d);
   if(a>d||d<a)
   {

       printf("joy hay\n");
   }
   else
   {
       printf("MARAR\n");
   }


    return 0;
}
