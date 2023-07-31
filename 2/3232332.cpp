#include<stdio.h>
int main()
{
   float a,b;
   scanf("%f %f",&a,&b);
   b=a;
   printf(" the value of b is %f\n",b );

   if(b>a)
   {
       printf("yes\n");
   }
   else
   {
       printf("wrong\n");
   }
    return 0;
}
