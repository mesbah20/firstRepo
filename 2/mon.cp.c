#include<stdio.h>
int main()
{
   int a,d,f,g,h,y;
   scanf("%d%d%d%d%d" ,&a,&d,&f,&g,&h);
   y=a*d*f*g/h;
   printf("value of y is %d\n" ,y);
   if(y<=138476)
   {

       printf("maysa\n");
   }
   else
   {
       printf("anik\n");
   }
    return 0;
}
