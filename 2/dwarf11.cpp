#include<stdio.h>
int main()
{
   float a,f,g,h,j,k;
   scanf("%f%f%f",&a,&f,&g);
   h=a*f-g;
   j=g+a+f;
   k=f*a*g;
   printf("%f%f%f" ,h,j,k);

   if (h>=k||j<=h||k!=j)
   {
       printf("rupok\n");

   }

   else
   {

       printf("jitu\n");
   }
    return 0;
}
