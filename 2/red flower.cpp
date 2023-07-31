#include<stdio.h>
int main()
{
   int q,w,e,r,t;
   scanf("%d%d%d",&q,&w,&e);
   r=(q-w)*e;
   t=q*w;
   printf("%d\n%d\n",r,t);
   if(r!=t&&t>=r&&r<=t)
   {
       printf("yah hooo");
   }
   else
   {
       printf("oooh no");
   }
    return 0;
}
