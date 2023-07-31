#include<stdio.h>
int main()
{
   int s,d,f,g,h;
   s=15;
   d=15;
   f=15;
   g=3375;
   h=s*d*f;
   printf("%d\n" ,h);

   if(h!=g)
   {
       printf("active\n");
   }
   else
   {

       printf("idle\n");
   }
    return 0;
}
