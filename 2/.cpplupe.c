#include<stdio.h>
int main()
{
   int s,d,f;
   scanf("%d %d",&s,&d);
   f=d*s;
   printf("%d\n",f);

   if(f-d>100)
   {
       printf("true\n");
   }
   else
   {
       printf("false\n");
   }
    return 0;
}
