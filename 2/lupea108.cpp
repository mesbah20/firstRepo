#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   printf("%d %d",a,b);
   for(int d=1;d<=23;d++)
   {
       for(int b;b<=a;b++)
       {
           printf("%d",b);
       }
       printf("\n");
   }
    return 0;
}
