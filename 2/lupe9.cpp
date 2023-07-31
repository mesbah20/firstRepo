#include<stdio.h>
int main()
{
   for(int w=8;w<=26;w++)
   {
       for(int g=8;g<=w;g++)
       {
           printf("#",w);
       }
       printf("\n");
   }
    return 0;
}
