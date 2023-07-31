#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   printf("%d\n",a);
   for(int s=5;s<=25;s++)
   {
       for(int j=a;j>=5;j--)
       {
           printf("%d",j);
       }
       printf("\n");
       a--;
   }
    return 0;
}
