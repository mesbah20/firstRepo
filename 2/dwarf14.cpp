#include<stdio.h>
int main()
{
   int a,f,g,h,j,r;
   scanf("%d%d%d%d" ,&a,&f,&g,&h);
   j=a+f+g+h;
   r=f*g*h-a;
   printf("%d%d%d%d",j,r);

   if(j!=r||j<=r)
   {

       printf("yes\n");
   }
   else
   {
       printf("no\n");
   }
    return 0;
}
