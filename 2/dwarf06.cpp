#include<stdio.h>
int main()
{
   int q,e,r,t,y;
   scanf("%d%d%d%d" ,&q,&e,&r,&t,&y);
   y=q*e*r;
   q=y*e/r;
   r=t*r/e;

   if(t==y||y==q||q==r||t==q||t==r||r==y)
   {

       printf("bah bah goooood\n");
   }
   else

   {

       printf("poo poo baaaad\n");
   }
    return 0;
}
