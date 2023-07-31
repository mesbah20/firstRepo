#include<stdio.h>
int main()
{
   int a=20;
   for(int g=1;g<=20;g++)
   {
       for(int j=a;j>=1;j--)
       {
           printf("%d",j);
       }
       printf("\n");
       a--;


   }
    return 0;
}
