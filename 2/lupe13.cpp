#include<stdio.h>
int main()
{
   for(int r=5;r<=13;r++)
   {
       for(int g=5;g<=r;g++)
       {
           printf("%d ",r);
       }
       printf("\n");
   }
    return 0;
}
