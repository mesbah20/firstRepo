#include<stdio.h>
int main()
{
   int t,q,w,e,r;
   scanf("%d%d%d" ,&q,&w,&t);
   e=t+q*w;
   r=w*q-t;
   printf("%d%d%d" ,q,w,t);
   if(e>=r&&r!=e)
   {
       printf("batista\n");
   }
   else
   {
       printf("cane\n");
   }
    return 0;

}
