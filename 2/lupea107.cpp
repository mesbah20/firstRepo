#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   for(int s=1;s<=10;s++)
   {
       for(int j=a;j>=1;j--)
       {
           printf("%d",s);
       }
       printf("\n");
       a--;

   }
    return 0;
}