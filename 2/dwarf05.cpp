#include<stdio.h>
int main()
{
   int z,x,c,d;
   scanf("%d%d%d",&z,&x,&c);
   d=x*c;
   printf("%d",d);

   if(z!=d)
   {
       printf("oh yes\n");
   }
   else
   {
       printf("noo never\n");

   }
    return 0;
}
