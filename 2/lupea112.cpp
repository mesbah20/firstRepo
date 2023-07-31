#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   printf("%d\n",a);
   for(int s=5;s<=20;s++)
   {
       for(int j=20;j>=a;j--)
       {
           printf("%d ",j);
       }
       printf("\n");
       a--;
   }
    return 0;
}
