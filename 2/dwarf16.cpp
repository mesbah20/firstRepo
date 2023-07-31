#include<stdio.h>
int main()
{
   int a,s,d,f;
   scanf("%d%d%d" ,&a,&s,&d);
   f=a*s-d;
   printf("%d\n" ,f);
   if (f!=1255&&f>=2588)
   {
       printf("anik\n");
   }
   else
   {
       printf("pavel\n");
   }
    return 0;
}
