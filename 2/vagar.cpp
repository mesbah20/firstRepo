#include<stdio.h>
int main()
{
   float m,r,t,w;
   scanf("%f%f",&m,&r);
   t=m-r;
   w=4555;
   printf("%f\n",t);
   if(t>=w&&w!=t)
   {
       printf("icecream");
   }
   else
   {
       printf("barger");
   }

    return 0;
}
