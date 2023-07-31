#include<stdio.h>
int main()
{
   int x,a,i;
   scanf("%d%d",&a,&i);
   x=(a/i);
   for(int a=1;a<=x;a++){
    if(a==15)
        break;
    {
        printf("%d ",a);
    }
   }
}
