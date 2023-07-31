#include<stdio.h>
int main()
{
   int w,e,r,t,u;
   scanf("%d%d%",&w,&e,&r);
   t=w*e*r;
   u=3800000;
   if(t>u&&u<=t&&t!=u)
   {
       printf("balaji");
   }
   else
   {
       printf("taskin");
   }
    return 0;
}
