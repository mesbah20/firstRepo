#include<stdio.h>
int main()
{
   int w,e,r,y,o;
   scanf("%d%d%d",&e,&r,&y);
   w=(e*y)-r;
   o=(r+y)*e;
   printf("%d\n%d\n",w,o);
   if(w<=o&&o>=w&&o!=w)
   {
       printf("sami=write");
   }
   else
   {
       printf("shoab=wrong");
   }

    return 0;
}
