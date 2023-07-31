#include<stdio.h>
int main()
{
   int x,a,i;
   scanf("%d%d",&a,&i);
   x=(a/i);
   for(int y=1;y<=x;y++){

   if(y==15)
    break;
   {
       printf("%d\n",y);
   }
   }
}
