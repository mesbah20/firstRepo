#include<stdio.h>
int main()
{
   int h,fd,s,n,r;
   scanf("%d%d%d%d" ,&h,&fd,&s,&n);
   r=(h+fd)-(s+n);
   printf("value of r is %d\n ",r);
    return 0;
}
